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
// Class MediaAssets.MediaSource
class UMediaSource : public UObject
{
public:
	uint8                                        Pad_2B99[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MediaSource");
		return Clss;
	}

	bool Validate();
	class FString GetUrl();
};

// 0x8 (0x38 - 0x30)
// Class MediaAssets.BaseMediaSource
class UBaseMediaSource : public UMediaSource
{
public:
	class FName                                  PlayerName;                                        // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BaseMediaSource");
		return Clss;
	}

};

// 0x28 (0x60 - 0x38)
// Class MediaAssets.FileMediaSource
class UFileMediaSource : public UBaseMediaSource
{
public:
	class FString                                FilePath;                                          // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PrecacheFile;                                      // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B9A[0x17];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FileMediaSource");
		return Clss;
	}

	void SetFilePath(const class FString& Path);
};

// 0x0 (0x28 - 0x28)
// Class MediaAssets.MediaBlueprintFunctionLibrary
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MediaBlueprintFunctionLibrary");
		return Clss;
	}

	void EnumerateWebcamCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32 Filter);
	void EnumerateVideoCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32 Filter);
	void EnumerateAudioCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32 Filter);
};

// 0x110 (0x138 - 0x28)
// Class MediaAssets.MediaPlayer
class UMediaPlayer : public UObject
{
public:
	UMulticastDelegateProperty_                  OnEndReached;                                      // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMediaClosed;                                     // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMediaOpened;                                     // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMediaOpenFailed;                                 // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlaybackResumed;                                 // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlaybackSuspended;                               // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSeekCompleted;                                   // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTracksChanged;                                   // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FTimespan                             CacheAhead;                                        // 0xA8(0x8)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                             CacheBehind;                                       // 0xB0(0x8)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                             CacheBehindGame;                                   // 0xB8(0x8)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NativeAudioOut;                                    // 0xC0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PlayOnOpen;                                        // 0xC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BB7[0x2];                                     
	uint8                                        Shuffle : 1;                                       // Mask : 0x1 0xC4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Loop : 1;                                          // Mask : 0x2 0xC4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2BB8[0x3];                                     
	class UMediaPlaylist*                        Playlist;                                          // 0xC8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PlaylistIndex;                                     // 0xD0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2BB9[0x4];                                     
	struct FTimespan                             TimeDelay;                                         // 0xD8(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HorizontalFieldOfView;                             // 0xE0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        VerticalFieldOfView;                               // 0xE4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              ViewRotation;                                      // 0xE8(0xC)(Edit, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2BBA[0x2C];                                    
	struct FGuid                                 PlayerGuid;                                        // 0x120(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2BBB[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MediaPlayer");
		return Clss;
	}

	bool SupportsSeeking();
	bool SupportsScrubbing();
	bool SupportsRate(float Rate, bool Unthinned);
	bool SetViewRotation(struct FRotator& Rotation, bool Absolute);
	bool SetViewField(float Horizontal, float Vertical, bool Absolute);
	bool SetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex, float FrameRate);
	bool SetTrackFormat(enum class EMediaPlayerTrack TrackType, int32 TrackIndex, int32 FormatIndex);
	void SetTimeDelay(const struct FTimespan& TimeDelay);
	bool SetRate(float Rate);
	bool SetNativeVolume(float Volume);
	bool SetLooping(bool Looping);
	void SetDesiredPlayerName(class FName PlayerName);
	void SetBlockOnTime(struct FTimespan& Time);
	bool SelectTrack(enum class EMediaPlayerTrack TrackType, int32 TrackIndex);
	bool Seek(struct FTimespan& Time);
	bool Rewind();
	bool Reopen();
	bool Previous();
	bool Play();
	bool Pause();
	bool OpenUrl(const class FString& URL);
	bool OpenSource(class UMediaSource* MediaSource);
	bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int32 Index);
	bool OpenPlaylist(class UMediaPlaylist* InPlaylist);
	bool OpenFile(const class FString& FilePath);
	bool Next();
	bool IsReady();
	bool IsPreparing();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	bool IsConnecting();
	bool IsBuffering();
	bool HasError();
	struct FRotator GetViewRotation();
	class FString GetVideoTrackType(int32 TrackIndex, int32 FormatIndex);
	struct FFloatRange GetVideoTrackFrameRates(int32 TrackIndex, int32 FormatIndex);
	float GetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex);
	struct FIntPoint GetVideoTrackDimensions(int32 TrackIndex, int32 FormatIndex);
	float GetVideoTrackAspectRatio(int32 TrackIndex, int32 FormatIndex);
	float GetVerticalFieldOfView();
	class FString GetUrl();
	class FString GetTrackLanguage(enum class EMediaPlayerTrack TrackType, int32 TrackIndex);
	int32 GetTrackFormat(enum class EMediaPlayerTrack TrackType, int32 TrackIndex);
	class FText GetTrackDisplayName(enum class EMediaPlayerTrack TrackType, int32 TrackIndex);
	struct FTimespan GetTimeDelay();
	struct FTimespan GetTime();
	void GetSupportedRates(TArray<struct FFloatRange>* OutRates, bool Unthinned);
	int32 GetSelectedTrack(enum class EMediaPlayerTrack TrackType);
	float GetRate();
	int32 GetPlaylistIndex();
	class UMediaPlaylist* GetPlaylist();
	class FName GetPlayerName();
	int32 GetNumTracks(enum class EMediaPlayerTrack TrackType);
	int32 GetNumTrackFormats(enum class EMediaPlayerTrack TrackType, int32 TrackIndex);
	class FText GetMediaName();
	float GetHorizontalFieldOfView();
	struct FTimespan GetDuration();
	class FName GetDesiredPlayerName();
	class FString GetAudioTrackType(int32 TrackIndex, int32 FormatIndex);
	int32 GetAudioTrackSampleRate(int32 TrackIndex, int32 FormatIndex);
	int32 GetAudioTrackChannels(int32 TrackIndex, int32 FormatIndex);
	void Close();
	bool CanPlayUrl(const class FString& URL);
	bool CanPlaySource(class UMediaSource* MediaSource);
	bool CanPause();
};

// 0x10 (0x38 - 0x28)
// Class MediaAssets.MediaPlaylist
class UMediaPlaylist : public UObject
{
public:
	TArray<class UMediaSource*>                  Items;                                             // 0x28(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MediaPlaylist");
		return Clss;
	}

	bool Replace(int32 Index, class UMediaSource* Replacement);
	bool RemoveAt(int32 Index);
	bool Remove(class UMediaSource* MediaSource);
	int32 Num();
	void Insert(class UMediaSource* MediaSource, int32 Index);
	class UMediaSource* GetRandom(int32* OutIndex);
	class UMediaSource* GetPrevious(int32* InOutIndex);
	class UMediaSource* GetNext(int32* InOutIndex);
	class UMediaSource* Get(int32 Index);
	bool AddUrl(const class FString& URL);
	bool AddFile(const class FString& FilePath);
	bool Add(class UMediaSource* MediaSource);
};

// 0xB0 (0x670 - 0x5C0)
// Class MediaAssets.MediaSoundComponent
class UMediaSoundComponent : public USynthComponent
{
public:
	enum class EMediaSoundChannels               Channels;                                          // 0x5C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DynamicRateAdjustment;                             // 0x5C4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BC9[0x3];                                     
	float                                        RateAdjustmentFactor;                              // 0x5C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatRange                           RateAdjustmentRange;                               // 0x5CC(0x10)(Edit, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BCA[0x4];                                     
	class UMediaPlayer*                          MediaPlayer;                                       // 0x5E0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2BCB[0x88];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MediaSoundComponent");
		return Clss;
	}

	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
	class UMediaPlayer* GetMediaPlayer();
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings* OutAttenuationSettings);
};

// 0x90 (0x140 - 0xB0)
// Class MediaAssets.MediaTexture
class UMediaTexture : public UTexture
{
public:
	enum class ETextureAddress                   AddressX;                                          // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureAddress                   AddressY;                                          // 0xB1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoClear;                                         // 0xB2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BCC[0x1];                                     
	struct FLinearColor                          ClearColor;                                        // 0xB4(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BCD[0x4];                                     
	class UMediaPlayer*                          MediaPlayer;                                       // 0xC8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2BCE[0x70];                                    

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MediaTexture");
		return Clss;
	}

	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
	int32 GetWidth();
	class UMediaPlayer* GetMediaPlayer();
	int32 GetHeight();
	float GetAspectRatio();
};

// 0x8 (0x38 - 0x30)
// Class MediaAssets.PlatformMediaSource
class UPlatformMediaSource : public UMediaSource
{
public:
	class UMediaSource*                          MediaSource;                                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlatformMediaSource");
		return Clss;
	}

};

// 0x10 (0x48 - 0x38)
// Class MediaAssets.StreamMediaSource
class UStreamMediaSource : public UBaseMediaSource
{
public:
	class FString                                StreamUrl;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StreamMediaSource");
		return Clss;
	}

};

// 0x8 (0x40 - 0x38)
// Class MediaAssets.TimeSynchronizableMediaSource
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{
public:
	bool                                         bUseTimeSynchronization;                           // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BCF[0x7];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TimeSynchronizableMediaSource");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
