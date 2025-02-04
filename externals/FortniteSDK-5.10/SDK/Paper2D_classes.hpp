#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x1C8 - 0x1A8)
// Class Paper2D.MaterialExpressionSpriteTextureSampler
class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{
public:
	bool                                         bSampleAdditionalTextures;                         // 0x1A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E1E[0x3];                                      
	int32                                        AdditionalSlotIndex;                               // 0x1AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  SlotDisplayName;                                   // 0x1B0(0x18)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MaterialExpressionSpriteTextureSampler");
		return Clss;
	}

};

// 0x0 (0x740 - 0x740)
// Class Paper2D.PaperCharacter
class APaperCharacter : public ACharacter
{
public:
	//class UPaperFlipbookComponent*             Sprite;                                            // 0x738(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperCharacter");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class Paper2D.PaperFlipbook
class UPaperFlipbook : public UObject
{
public:
	float                                        FramesPerSecond;                                   // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E23[0x4];                                      
	TArray<struct FPaperFlipbookKeyFrame>        KeyFrames;                                         // 0x30(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    DefaultMaterial;                                   // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFlipbookCollisionMode            CollisionSource;                                   // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E24[0x7];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperFlipbook");
		return Clss;
	}

	bool IsValidKeyFrameIndex(int32 Index);
	float GetTotalDuration();
	class UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds);
	class UPaperSprite* GetSpriteAtFrame(int32 FrameIndex);
	int32 GetNumKeyFrames();
	int32 GetNumFrames();
	int32 GetKeyFrameIndexAtTime(float Time, bool bClampToEnds);
};

// 0x8 (0x330 - 0x328)
// Class Paper2D.PaperFlipbookActor
class APaperFlipbookActor : public AActor
{
public:
	class UPaperFlipbookComponent*               RenderComponent;                                   // 0x328(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperFlipbookActor");
		return Clss;
	}

};

// 0x40 (0x5D0 - 0x590)
// Class Paper2D.PaperFlipbookComponent
class UPaperFlipbookComponent : public UMeshComponent
{
public:
	//class UPaperFlipbook*                      SourceFlipbook;                                    // 0x588(0x8)(Edit, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    Material;                                          // 0x590(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PlayRate;                                          // 0x598(0x4)(Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bLooping : 1;                                      // Mask : 0x1 0x59C(0x1)(Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bReversePlayback : 1;                              // Mask : 0x2 0x59C(0x1)(Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bPlaying : 1;                                      // Mask : 0x4 0x59C(0x1)(Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E28[0x3];                                      
	float                                        AccumulatedTime;                                   // 0x5A0(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CachedFrameIndex;                                  // 0x5A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          SpriteColor;                                       // 0x5A8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBodySetup*                            CachedBodySetup;                                   // 0x5B8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnFinishedPlaying;                                 // 0x5C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperFlipbookComponent");
		return Clss;
	}

	void Stop();
	void SetSpriteColor(const struct FLinearColor& NewColor);
	void SetPlayRate(float NewRate);
	void SetPlaybackPositionInFrames(int32 NewFramePosition, bool bFireEvents);
	void SetPlaybackPosition(float NewPosition, bool bFireEvents);
	void SetNewTime(float NewTime);
	void SetLooping(bool bNewLooping);
	bool SetFlipbook(class UPaperFlipbook* NewFlipbook);
	void ReverseFromEnd();
	void Reverse();
	void PlayFromStart();
	void Play();
	void OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook);
	bool IsReversing();
	bool IsPlaying();
	bool IsLooping();
	float GetPlayRate();
	int32 GetPlaybackPositionInFrames();
	float GetPlaybackPosition();
	int32 GetFlipbookLengthInFrames();
	float GetFlipbookLength();
	float GetFlipbookFramerate();
	class UPaperFlipbook* GetFlipbook();
};

// 0x8 (0x330 - 0x328)
// Class Paper2D.PaperGroupedSpriteActor
class APaperGroupedSpriteActor : public AActor
{
public:
	class UPaperGroupedSpriteComponent*          RenderComponent;                                   // 0x328(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperGroupedSpriteActor");
		return Clss;
	}

};

// 0x30 (0x5C0 - 0x590)
// Class Paper2D.PaperGroupedSpriteComponent
class UPaperGroupedSpriteComponent : public UMeshComponent
{
public:
	//TArray<class UMaterialInterface*>          InstanceMaterials;                                 // 0x588(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_E30[0x8];                                      
	TArray<struct FSpriteInstanceData>           PerInstanceSpriteData;                             // 0x598(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_E31[0x18];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperGroupedSpriteComponent");
		return Clss;
	}

	bool UpdateInstanceTransform(int32 InstanceIndex, struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
	bool UpdateInstanceColor(int32 InstanceIndex, const struct FLinearColor& NewInstanceColor, bool bMarkRenderStateDirty);
	void SortInstancesAlongAxis(const struct FVector& WorldSpaceSortAxis);
	bool RemoveInstance(int32 InstanceIndex);
	bool GetInstanceTransform(int32 InstanceIndex, struct FTransform* OutInstanceTransform, bool bWorldSpace);
	int32 GetInstanceCount();
	void ClearInstances();
	int32 AddInstance(struct FTransform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, const struct FLinearColor& Color);
};

// 0x8 (0x30 - 0x28)
// Class Paper2D.PaperRuntimeSettings
class UPaperRuntimeSettings : public UObject
{
public:
	bool                                         bEnableSpriteAtlasGroups;                          // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableTerrainSplineEditing;                       // 0x29(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResizeSpriteDataToMatchTextures;                  // 0x2A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E32[0x5];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperRuntimeSettings");
		return Clss;
	}

};

// 0x98 (0xC0 - 0x28)
// Class Paper2D.PaperSprite
class UPaperSprite : public UObject
{
public:
	uint8                                        Pad_E33[0x10];                                     
	struct FVector2D                             SourceUV;                                          // 0x38(0x8)(Edit, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             SourceDimension;                                   // 0x40(0x8)(Edit, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            SourceTexture;                                     // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UTexture*>                      AdditionalSourceTextures;                          // 0x50(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, Protected, NativeAccessSpecifierProtected)
	struct FVector2D                             BakedSourceUV;                                     // 0x60(0x8)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             BakedSourceDimension;                              // 0x68(0x8)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            BakedSourceTexture;                                // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    DefaultMaterial;                                   // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    AlternateMaterial;                                 // 0x80(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPaperSpriteSocket>            Sockets;                                           // 0x88(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	enum class ESpriteCollisionMode              SpriteCollisionDomain;                             // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E34[0x3];                                      
	float                                        PixelsPerUnrealUnit;                               // 0x9C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBodySetup*                            BodySetup;                                         // 0xA0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AlternateMaterialSplitIndex;                       // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E35[0x4];                                      
	TArray<struct FVector4>                      BakedRenderData;                                   // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperSprite");
		return Clss;
	}

};

// 0x8 (0x330 - 0x328)
// Class Paper2D.PaperSpriteActor
class APaperSpriteActor : public AActor
{
public:
	class UPaperSpriteComponent*                 RenderComponent;                                   // 0x328(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperSpriteActor");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Paper2D.PaperSpriteAtlas
class UPaperSpriteAtlas : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperSpriteAtlas");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Paper2D.PaperSpriteBlueprintLibrary
class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperSpriteBlueprintLibrary");
		return Clss;
	}

	struct FSlateBrush MakeBrushFromSprite(class UPaperSprite* Sprite, int32 Width, int32 Height);
};

// 0x20 (0x5B0 - 0x590)
// Class Paper2D.PaperSpriteComponent
class UPaperSpriteComponent : public UMeshComponent
{
public:
	//class UPaperSprite*                        SourceSprite;                                      // 0x588(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    MaterialOverride;                                  // 0x590(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          SpriteColor;                                       // 0x598(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E37[0x8];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperSpriteComponent");
		return Clss;
	}

	void SetSpriteColor(const struct FLinearColor& NewColor);
	bool SetSprite(class UPaperSprite* NewSprite);
	class UPaperSprite* GetSprite();
};

// 0x18 (0x340 - 0x328)
// Class Paper2D.PaperTerrainActor
class APaperTerrainActor : public AActor
{
public:
	class USceneComponent*                       DummyRoot;                                         // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPaperTerrainSplineComponent*          SplineComponent;                                   // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPaperTerrainComponent*                RenderComponent;                                   // 0x338(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperTerrainActor");
		return Clss;
	}

};

// 0x60 (0x5C0 - 0x560)
// Class Paper2D.PaperTerrainComponent
class UPaperTerrainComponent : public UPrimitiveComponent
{
public:
	class UPaperTerrainMaterial*                 TerrainMaterial;                                   // 0x560(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClosedSpline;                                     // 0x568(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFilledSpline;                                     // 0x569(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E38[0x6];                                      
	class UPaperTerrainSplineComponent*          AssociatedSpline;                                  // 0x570(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RandomSeed;                                        // 0x578(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SegmentOverlapAmount;                              // 0x57C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TerrainColor;                                      // 0x580(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ReparamStepsPerSegment;                            // 0x590(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESpriteCollisionMode              SpriteCollisionDomain;                             // 0x594(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E39[0x3];                                      
	float                                        CollisionThickness;                                // 0x598(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E3A[0x4];                                      
	class UBodySetup*                            CachedBodySetup;                                   // 0x5A0(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E3B[0x18];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperTerrainComponent");
		return Clss;
	}

	void SetTerrainColor(const struct FLinearColor& NewColor);
};

// 0x18 (0x48 - 0x30)
// Class Paper2D.PaperTerrainMaterial
class UPaperTerrainMaterial : public UDataAsset
{
public:
	TArray<struct FPaperTerrainMaterialRule>     Rules;                                             // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPaperSprite*                          InteriorFill;                                      // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperTerrainMaterial");
		return Clss;
	}

};

// 0x10 (0x660 - 0x650)
// Class Paper2D.PaperTerrainSplineComponent
class UPaperTerrainSplineComponent : public USplineComponent
{
public:
	uint8                                        Pad_E3C[0x10];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperTerrainSplineComponent");
		return Clss;
	}

};

// 0x70 (0x98 - 0x28)
// Class Paper2D.PaperTileLayer
class UPaperTileLayer : public UObject
{
public:
	class FText                                  LayerName;                                         // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        LayerWidth;                                        // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        LayerHeight;                                       // 0x44(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bHiddenInGame : 1;                                 // Mask : 0x1 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bLayerCollides : 1;                                // Mask : 0x2 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bOverrideCollisionThickness : 1;                   // Mask : 0x4 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bOverrideCollisionOffset : 1;                      // Mask : 0x8 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E3D[0x3];                                      
	float                                        CollisionThicknessOverride;                        // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CollisionOffsetOverride;                           // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                          LayerColor;                                        // 0x54(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        AllocatedWidth;                                    // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        AllocatedHeight;                                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E3E[0x4];                                      
	TArray<struct FPaperTileInfo>                AllocatedCells;                                    // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UPaperTileSet*                         TileSet;                                           // 0x80(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<int32>                                AllocatedGrid;                                     // 0x88(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperTileLayer");
		return Clss;
	}

};

// 0x80 (0xA8 - 0x28)
// Class Paper2D.PaperTileMap
class UPaperTileMap : public UObject
{
public:
	int32                                        MapWidth;                                          // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MapHeight;                                         // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TileWidth;                                         // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TileHeight;                                        // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PixelsPerUnrealUnit;                               // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SeparationPerTileX;                                // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SeparationPerTileY;                                // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SeparationPerLayer;                                // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperTileSet>          SelectedTileSet;                                   // 0x48(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Material;                                          // 0x70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPaperTileLayer*>               TileLayers;                                        // 0x78(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        CollisionThickness;                                // 0x88(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESpriteCollisionMode              SpriteCollisionDomain;                             // 0x8C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETileMapProjectionMode            ProjectionMode;                                    // 0x8D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E3F[0x2];                                      
	int32                                        HexSideLength;                                     // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E40[0x4];                                      
	class UBodySetup*                            BodySetup;                                         // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LayerNameIndex;                                    // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E41[0x4];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperTileMap");
		return Clss;
	}

};

// 0x8 (0x330 - 0x328)
// Class Paper2D.PaperTileMapActor
class APaperTileMapActor : public AActor
{
public:
	class UPaperTileMapComponent*                RenderComponent;                                   // 0x328(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperTileMapActor");
		return Clss;
	}

};

// 0x50 (0x5E0 - 0x590)
// Class Paper2D.PaperTileMapComponent
class UPaperTileMapComponent : public UMeshComponent
{
public:
	//int32                                      MapWidth;                                          // 0x588(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	//int32                                      MapHeight;                                         // 0x58C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        TileWidth;                                         // 0x590(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        TileHeight;                                        // 0x594(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPaperTileSet*                         DefaultLayerTileSet;                               // 0x598(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    Material;                                          // 0x5A0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UPaperTileLayer*>               TileLayers;                                        // 0x5A8(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)
	struct FLinearColor                          TileMapColor;                                      // 0x5B8(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        UseSingleLayerIndex;                               // 0x5C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUseSingleLayer;                                   // 0x5CC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E4D[0x3];                                      
	class UPaperTileMap*                         TileMap;                                           // 0x5D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E4E[0x8];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperTileMapComponent");
		return Clss;
	}

	void SetTileMapColor(const struct FLinearColor& NewColor);
	bool SetTileMap(class UPaperTileMap* NewTileMap);
	void SetTile(int32 X, int32 Y, int32 Layer, const struct FPaperTileInfo& NewValue);
	void SetLayerColor(const struct FLinearColor& NewColor, int32 Layer);
	void SetLayerCollision(int32 Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision);
	void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);
	void ResizeMap(int32 NewWidthInTiles, int32 NewHeightInTiles);
	void RebuildCollision();
	bool OwnsTileMap();
	void MakeTileMapEditable();
	void GetTilePolygon(int32 TileX, int32 TileY, TArray<struct FVector>* Points, int32 LayerIndex, bool bWorldSpace);
	struct FLinearColor GetTileMapColor();
	struct FVector GetTileCornerPosition(int32 TileX, int32 TileY, int32 LayerIndex, bool bWorldSpace);
	struct FVector GetTileCenterPosition(int32 TileX, int32 TileY, int32 LayerIndex, bool bWorldSpace);
	struct FPaperTileInfo GetTile(int32 X, int32 Y, int32 Layer);
	void GetMapSize(int32* MapWidth, int32* MapHeight, int32* NumLayers);
	struct FLinearColor GetLayerColor(int32 Layer);
	void CreateNewTileMap(int32 MapWidth, int32 MapHeight, int32 TileWidth, int32 TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer);
	class UPaperTileLayer* AddNewLayer();
};

// 0x80 (0xA8 - 0x28)
// Class Paper2D.PaperTileSet
class UPaperTileSet : public UObject
{
public:
	struct FIntPoint                             TileSize;                                          // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTexture2D*                            TileSheet;                                         // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UTexture*>                      AdditionalSourceTextures;                          // 0x38(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, NativeAccessSpecifierPrivate)
	struct FIntMargin                            BorderMargin;                                      // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate)
	struct FIntPoint                             PerTileSpacing;                                    // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FIntPoint                             DrawingOffset;                                     // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        WidthInTiles;                                      // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        HeightInTiles;                                     // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        AllocatedWidth;                                    // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        AllocatedHeight;                                   // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FPaperTileMetadata>            PerTileData;                                       // 0x78(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FPaperTileSetTerrain>          Terrains;                                          // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	int32                                        TileWidth;                                         // 0x98(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        TileHeight;                                        // 0x9C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        Margin;                                            // 0xA0(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        Spacing;                                           // 0xA4(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperTileSet");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Paper2D.TileMapBlueprintLibrary
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TileMapBlueprintLibrary");
		return Clss;
	}

	struct FPaperTileInfo MakeTile(int32 TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);
	class FName GetTileUserData(const struct FPaperTileInfo& Tile);
	struct FTransform GetTileTransform(const struct FPaperTileInfo& Tile);
	void BreakTile(const struct FPaperTileInfo& Tile, int32* TileIndex, class UPaperTileSet** TileSet, bool* bFlipH, bool* bFlipV, bool* bFlipD);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
