#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD20 (0xD48 - 0x28)
// Class MeshDescription.MeshDescription
class UMeshDescription : public UObject
{
public:
	uint8                                        Pad_16AD[0xD20];                                   

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshDescription");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
