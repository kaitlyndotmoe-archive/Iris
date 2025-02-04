#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EQosResponseType : uint8
{
	NoResponse                     = 0,
	Success                        = 1,
	Failure                        = 2,
	EQosResponseType_MAX           = 3,
};

enum class EQosCompletionResult : uint8
{
	Invalid                        = 0,
	Success                        = 1,
	Failure                        = 2,
	Canceled                       = 3,
	EQosCompletionResult_MAX       = 4,
};

enum class EQosRegionResult : uint8
{
	Invalid                        = 0,
	Success                        = 1,
	Incomplete                     = 2,
	EQosRegionResult_MAX           = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct Qos.QosSearchPass
struct FQosSearchPass
{
public:
	int32                                        RegionIdx;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentSessionIdx;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Qos.QosPingServerInfo
struct FQosPingServerInfo
{
public:
	class FString                                Address;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Port;                                              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_75[0x4];                                       
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Qos.QosDatacenterInfo
struct FQosDatacenterInfo
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(NativeAccessSpecifierPublic)
	class FString                                RegionId;                                          // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisible;                                          // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBeta;                                             // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76[0x5];                                       
	TArray<struct FQosPingServerInfo>            Servers;                                           // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Qos.QosRegionInfo
struct FQosRegionInfo
{
public:
	struct FQosDatacenterInfo                    Region;                                            // 0x0(0x40)(Transient, NativeAccessSpecifierPublic)
	enum class EQosRegionResult                  Result;                                            // 0x40(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_77[0x3];                                       
	int32                                        AvgPingMs;                                         // 0x44(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_78[0x10];                                      
	TArray<int32>                                PingResults;                                       // 0x58(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_79[0x8];                                       
	struct FDateTime                             LastCheckTimestamp;                                // 0x70(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
