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
// Class AvfMediaFactory.AvfMediaSettings
class UAvfMediaSettings : public UObject
{
public:
	bool                                         NativeAudioOut;                                    // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F08[0x7];                                      

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AvfMediaSettings");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
