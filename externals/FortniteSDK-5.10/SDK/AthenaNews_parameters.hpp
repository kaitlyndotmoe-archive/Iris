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
// Function AthenaNews.AthenaNews_C.Construct
struct UAthenaNews_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function AthenaNews.AthenaNews_C.ExecuteUbergraph_AthenaNews
struct UAthenaNews_C_ExecuteUbergraph_AthenaNews_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
