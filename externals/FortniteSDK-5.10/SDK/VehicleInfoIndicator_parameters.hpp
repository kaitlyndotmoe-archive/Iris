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

// 0x0 (0x0 - 0x0)
// Function VehicleInfoIndicator.VehicleInfoIndicator_C.OnVehicleChanged
struct UVehicleInfoIndicator_C_OnVehicleChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VehicleInfoIndicator.VehicleInfoIndicator_C.OnVehicleHealthChanged
struct UVehicleInfoIndicator_C_OnVehicleHealthChanged_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function VehicleInfoIndicator.VehicleInfoIndicator_C.ExecuteUbergraph_VehicleInfoIndicator
struct UVehicleInfoIndicator_C_ExecuteUbergraph_VehicleInfoIndicator_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D68[0x3];                                     
	float                                        CallFunc_GetMaxHealth_ReturnValue;                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetHealth_ReturnValue;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
