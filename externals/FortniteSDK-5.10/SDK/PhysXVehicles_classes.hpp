#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x158 (0x2D0 - 0x178)
// Class PhysXVehicles.WheeledVehicleMovementComponent
class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{
public:
	uint8                                        Pad_17B8[0x8];                                     
	uint8                                        bDeprecatedSpringOffsetMode : 1;                   // Mask : 0x1 0x180(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReverseAsBrake : 1;                               // Mask : 0x2 0x180(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseRVOAvoidance : 1;                              // Mask : 0x4 0x180(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRawHandbrakeInput : 1;                            // Mask : 0x8 0x180(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRawGearUpInput : 1;                               // Mask : 0x10 0x180(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRawGearDownInput : 1;                             // Mask : 0x20 0x180(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17B9[0x3];                                     
	uint8                                        bWasAvoidanceUpdated : 1;                          // Mask : 0x1 0x184(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17BA[0x3];                                     
	float                                        Mass;                                              // 0x188(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17BB[0x4];                                     
	TArray<struct FWheelSetup>                   WheelSetups;                                       // 0x190(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        DragCoefficient;                                   // 0x1A0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChassisWidth;                                      // 0x1A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChassisHeight;                                     // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DragArea;                                          // 0x1AC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EstimatedMaxEngineSpeed;                           // 0x1B0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxEngineRPM;                                      // 0x1B4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugDragMagnitude;                                // 0x1B8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InertiaTensorScale;                                // 0x1BC(0xC)(Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinNormalizedTireLoad;                             // 0x1C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinNormalizedTireLoadFiltered;                     // 0x1CC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxNormalizedTireLoad;                             // 0x1D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxNormalizedTireLoadFiltered;                     // 0x1D4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThresholdLongitudinalSpeed;                        // 0x1D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LowForwardSpeedSubStepCount;                       // 0x1DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HighForwardSpeedSubStepCount;                      // 0x1E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17BC[0x4];                                     
	TArray<class UVehicleWheel*>                 Wheels;                                            // 0x1E8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	uint8                                        Pad_17BD[0x18];                                    
	float                                        RVOAvoidanceRadius;                                // 0x210(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RVOAvoidanceHeight;                                // 0x214(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AvoidanceConsiderationRadius;                      // 0x218(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RVOSteeringStep;                                   // 0x21C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RVOThrottleStep;                                   // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AvoidanceUID;                                      // 0x224(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavAvoidanceMask                     AvoidanceGroup;                                    // 0x228(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNavAvoidanceMask                     GroupsToAvoid;                                     // 0x22C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNavAvoidanceMask                     GroupsToIgnore;                                    // 0x230(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                        AvoidanceWeight;                                   // 0x234(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PendingLaunchVelocity;                             // 0x238(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FReplicatedVehicleState               ReplicatedState;                                   // 0x244(0x14)(Net, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_17BE[0x4];                                     
	float                                        RawSteeringInput;                                  // 0x25C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RawThrottleInput;                                  // 0x260(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RawBrakeInput;                                     // 0x264(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SteeringInput;                                     // 0x268(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ThrottleInput;                                     // 0x26C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BrakeInput;                                        // 0x270(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HandbrakeInput;                                    // 0x274(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        IdleBrakeInput;                                    // 0x278(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StopThreshold;                                     // 0x27C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WrongDirectionThreshold;                           // 0x280(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVehicleInputRate                     ThrottleInputRate;                                 // 0x284(0x8)(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FVehicleInputRate                     BrakeInputRate;                                    // 0x28C(0x8)(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FVehicleInputRate                     HandbrakeInputRate;                                // 0x294(0x8)(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FVehicleInputRate                     SteeringInputRate;                                 // 0x29C(0x8)(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_17BF[0x24];                                    
	class AController*                           OverrideController;                                // 0x2C8(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WheeledVehicleMovementComponent");
		return Clss;
	}

	void SetUseAutoGears(bool bUseAuto);
	void SetThrottleInput(float Throttle);
	void SetTargetGear(int32 GearNum, bool bImmediate);
	void SetSteeringInput(float Steering);
	void SetHandbrakeInput(bool bNewHandbrake);
	void SetGroupsToIgnoreMask(struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToIgnore(int32 GroupFlags);
	void SetGroupsToAvoidMask(struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToAvoid(int32 GroupFlags);
	void SetGearUp(bool bNewGearUp);
	void SetGearDown(bool bNewGearDown);
	void SetBrakeInput(float Brake);
	void SetAvoidanceGroupMask(struct FNavAvoidanceMask& GroupMask);
	void SetAvoidanceGroup(int32 GroupFlags);
	void SetAvoidanceEnabled(bool bEnable);
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 CurrentGear);
	bool GetUseAutoGears();
	int32 GetTargetGear();
	float GetForwardSpeed();
	float GetEngineRotationSpeed();
	float GetEngineMaxRotationSpeed();
	int32 GetCurrentGear();
};

// 0x0 (0x2D0 - 0x2D0)
// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
class USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SimpleWheeledVehicleMovementComponent");
		return Clss;
	}

	void SetSteerAngle(float SteerAngle, int32 WheelIndex);
	void SetDriveTorque(float DriveTorque, int32 WheelIndex);
	void SetBrakeTorque(float BrakeTorque, int32 WheelIndex);
};

// 0x20 (0x50 - 0x30)
// Class PhysXVehicles.TireConfig
class UTireConfig : public UDataAsset
{
public:
	float                                        FrictionScale;                                     // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_17C0[0x4];                                     
	TArray<struct FTireConfigMaterialFriction>   TireFrictionScales;                                // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_17C1[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TireConfig");
		return Clss;
	}

};

// 0x610 (0x970 - 0x360)
// Class PhysXVehicles.VehicleAnimInstance
class UVehicleAnimInstance : public UAnimInstance
{
public:
	uint8                                        Pad_17C2[0x600];                                   
	class UWheeledVehicleMovementComponent*      WheeledVehicleMovementComponent;                   // 0x960(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_17C3[0x8];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VehicleAnimInstance");
		return Clss;
	}

	class AWheeledVehicle* GetVehicle();
};

// 0xC8 (0xF0 - 0x28)
// Class PhysXVehicles.VehicleWheel
class UVehicleWheel : public UObject
{
public:
	class UStaticMesh*                           CollisionMesh;                                     // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDontCreateShape;                                  // 0x30(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoAdjustCollisionSize;                          // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C4[0x2];                                     
	struct FVector                               Offset;                                            // 0x34(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShapeRadius;                                       // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShapeWidth;                                        // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass;                                              // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DampingRate;                                       // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SteerAngle;                                        // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectedByHandbrake;                              // 0x54(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C5[0x3];                                     
	class UTireType*                             TireType;                                          // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTireConfig*                           TireConfig;                                        // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LatStiffMaxLoad;                                   // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LatStiffValue;                                     // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LongStiffValue;                                    // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SuspensionForceOffset;                             // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SuspensionMaxRaise;                                // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SuspensionMaxDrop;                                 // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SuspensionNaturalFrequency;                        // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SuspensionDampingRatio;                            // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWheelSweepType                   SweepType;                                         // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C6[0x3];                                     
	float                                        MaxBrakeTorque;                                    // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxHandBrakeTorque;                                // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C7[0x4];                                     
	class UWheeledVehicleMovementComponent*      VehicleSim;                                        // 0x98(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WheelIndex;                                        // 0xA0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugLongSlip;                                     // 0xA4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugLatSlip;                                      // 0xA8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugNormalizedTireLoad;                           // 0xAC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C8[0x4];                                     
	float                                        DebugWheelTorque;                                  // 0xB4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugLongForce;                                    // 0xB8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugLatForce;                                     // 0xBC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0xC0(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OldLocation;                                       // 0xCC(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0xD8(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C9[0xC];                                     

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VehicleWheel");
		return Clss;
	}

	bool IsInAir();
	float GetSuspensionOffset();
	float GetSteerAngle();
	float GetRotationAngle();
};

// 0x10 (0x398 - 0x388)
// Class PhysXVehicles.WheeledVehicle
class AWheeledVehicle : public APawn
{
public:
	class USkeletalMeshComponent*                Mesh;                                              // 0x388(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWheeledVehicleMovementComponent*      VehicleMovement;                                   // 0x390(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WheeledVehicle");
		return Clss;
	}

};

// 0x158 (0x428 - 0x2D0)
// Class PhysXVehicles.WheeledVehicleMovementComponent4W
class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{
public:
	struct FVehicleEngineData                    EngineSetup;                                       // 0x2D0(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FVehicleDifferential4WData            DifferentialSetup;                                 // 0x360(0x1C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        AckermannAccuracy;                                 // 0x37C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVehicleTransmissionData              TransmissionSetup;                                 // 0x380(0x30)(Edit, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    SteeringCurve;                                     // 0x3B0(0x78)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WheeledVehicleMovementComponent4W");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
