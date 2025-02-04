#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ETriangleTessellationMode : uint8
{
	ThreeTriangles                 = 0,
	FourTriangles                  = 1,
	ETriangleTessellationMode_MAX  = 2,
};

enum class EInsetPolygonsMode : uint8
{
	All                            = 0,
	CenterPolygonOnly              = 1,
	SidePolygonsOnly               = 2,
	EInsetPolygonsMode_MAX         = 3,
};

enum class EPolygonEdgeHardness : uint8
{
	NewEdgesSoft                   = 0,
	NewEdgesHard                   = 1,
	AllEdgesSoft                   = 2,
	AllEdgesHard                   = 3,
	EPolygonEdgeHardness_MAX       = 4,
};

enum class EMeshElementAttributeType : uint8
{
	None                           = 0,
	FVector4                       = 1,
	FVector                        = 2,
	FVector2D                      = 3,
	Float                          = 4,
	Int                            = 5,
	Bool                           = 6,
	FName                          = 7,
	EMeshElementAttributeType_MAX  = 8,
};

enum class EMeshTopologyChange : uint8
{
	NoTopologyChange               = 0,
	TopologyChange                 = 1,
	EMeshTopologyChange_MAX        = 2,
};

enum class EMeshModificationType : uint8
{
	FirstInterim                   = 0,
	Interim                        = 1,
	Final                          = 2,
	EMeshModificationType_MAX      = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct EditableMesh.PolygonGroupForPolygon
struct FPolygonGroupForPolygon
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x4(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct EditableMesh.MeshElementAttributeValue
struct FMeshElementAttributeValue
{
public:
	uint8                                        Pad_1989[0x50];                                    
};

// 0x60 (0x60 - 0x0)
// ScriptStruct EditableMesh.MeshElementAttributeData
struct FMeshElementAttributeData
{
public:
	class FName                                  AttributeName;                                     // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AttributeIndex;                                    // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_198A[0x4];                                     
	struct FMeshElementAttributeValue            AttributeValue;                                    // 0x10(0x50)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EditableMesh.MeshElementAttributeList
struct FMeshElementAttributeList
{
public:
	TArray<struct FMeshElementAttributeData>     Attributes;                                        // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct EditableMesh.PolygonGroupToCreate
struct FPolygonGroupToCreate
{
public:
	struct FMeshElementAttributeList             PolygonGroupAttributes;                            // 0x0(0x10)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FPolygonGroupID                       OriginalPolygonGroupID;                            // 0x10(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_198B[0x4];                                     
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EditableMesh.VertexToMove
struct FVertexToMove
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NewVertexPosition;                                 // 0x4(0xC)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct EditableMesh.VerticesForEdge
struct FVerticesForEdge
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                             NewVertexID0;                                      // 0x4(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                             NewVertexID1;                                      // 0x8(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct EditableMesh.VertexIndexAndInstanceID
struct FVertexIndexAndInstanceID
{
public:
	int32                                        ContourIndex;                                      // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x4(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EditableMesh.VertexInstancesForPolygonHole
struct FVertexInstancesForPolygonHole
{
public:
	TArray<struct FVertexIndexAndInstanceID>     VertexIndicesAndInstanceIDs;                       // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct EditableMesh.ChangeVertexInstancesForPolygon
struct FChangeVertexInstancesForPolygon
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_198C[0x4];                                     
	TArray<struct FVertexIndexAndInstanceID>     PerimeterVertexIndicesAndInstanceIDs;              // 0x8(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole;            // 0x18(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EditableMesh.VertexAttributesForPolygonHole
struct FVertexAttributesForPolygonHole
{
public:
	TArray<struct FMeshElementAttributeList>     VertexAttributeList;                               // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct EditableMesh.VertexAttributesForPolygon
struct FVertexAttributesForPolygon
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_198D[0x4];                                     
	TArray<struct FMeshElementAttributeList>     PerimeterVertexAttributeLists;                     // 0x8(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole;                   // 0x18(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct EditableMesh.AttributesForEdge
struct FAttributesForEdge
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_198E[0x4];                                     
	struct FMeshElementAttributeList             EdgeAttributes;                                    // 0x8(0x10)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct EditableMesh.AttributesForVertexInstance
struct FAttributesForVertexInstance
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_198F[0x4];                                     
	struct FMeshElementAttributeList             VertexInstanceAttributes;                          // 0x8(0x10)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct EditableMesh.AttributesForVertex
struct FAttributesForVertex
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1990[0x4];                                     
	struct FMeshElementAttributeList             VertexAttributes;                                  // 0x8(0x10)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct EditableMesh.VertexPair
struct FVertexPair
{
public:
	struct FVertexID                             VertexID0;                                         // 0x0(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                             VertexID1;                                         // 0x4(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct EditableMesh.PolygonToSplit
struct FPolygonToSplit
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1991[0x4];                                     
	TArray<struct FVertexPair>                   VertexPairsToSplitAt;                              // 0x8(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct EditableMesh.VertexAndAttributes
struct FVertexAndAttributes
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                             VertexID;                                          // 0x4(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMeshElementAttributeList             PolygonVertexAttributes;                           // 0x8(0x10)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EditableMesh.PolygonHoleVertices
struct FPolygonHoleVertices
{
public:
	TArray<struct FVertexAndAttributes>          HoleVertices;                                      // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct EditableMesh.PolygonToCreate
struct FPolygonToCreate
{
public:
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x0(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1992[0x4];                                     
	TArray<struct FVertexAndAttributes>          PerimeterVertices;                                 // 0x8(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPolygonHoleVertices>          PolygonHoles;                                      // 0x18(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FPolygonID                            OriginalPolygonID;                                 // 0x28(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPolygonEdgeHardness              PolygonEdgeHardness;                               // 0x2C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1993[0x3];                                     
};

// 0x30 (0x30 - 0x0)
// ScriptStruct EditableMesh.EdgeToCreate
struct FEdgeToCreate
{
public:
	struct FVertexID                             VertexID0;                                         // 0x0(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                             VertexID1;                                         // 0x4(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                    ConnectedPolygons;                                 // 0x8(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FMeshElementAttributeList             EdgeAttributes;                                    // 0x18(0x10)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEdgeID                               OriginalEdgeID;                                    // 0x28(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1994[0x4];                                     
};

// 0x20 (0x20 - 0x0)
// ScriptStruct EditableMesh.VertexInstanceToCreate
struct FVertexInstanceToCreate
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1995[0x4];                                     
	struct FMeshElementAttributeList             VertexInstanceAttributes;                          // 0x8(0x10)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVertexInstanceID                     OriginalVertexInstanceID;                          // 0x18(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1996[0x4];                                     
};

// 0x18 (0x18 - 0x0)
// ScriptStruct EditableMesh.VertexToCreate
struct FVertexToCreate
{
public:
	struct FMeshElementAttributeList             VertexAttributes;                                  // 0x0(0x10)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVertexID                             OriginalVertexID;                                  // 0x10(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1997[0x4];                                     
};

// 0x34 (0x34 - 0x0)
// ScriptStruct EditableMesh.SubdividedQuadVertex
struct FSubdividedQuadVertex
{
public:
	int32                                        VertexPositionIndex;                               // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             TextureCoordinate0;                                // 0x4(0x8)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             TextureCoordinate1;                                // 0xC(0x8)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                VertexColor;                                       // 0x14(0x4)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               VertexNormal;                                      // 0x18(0xC)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               VertexTangent;                                     // 0x24(0xC)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VertexBinormalSign;                                // 0x30(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct EditableMesh.SubdividedQuad
struct FSubdividedQuad
{
public:
	struct FSubdividedQuadVertex                 QuadVertex0;                                       // 0x0(0x34)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSubdividedQuadVertex                 QuadVertex1;                                       // 0x34(0x34)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSubdividedQuadVertex                 QuadVertex2;                                       // 0x68(0x34)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSubdividedQuadVertex                 QuadVertex3;                                       // 0x9C(0x34)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EditableMesh.SubdivisionLimitSection
struct FSubdivisionLimitSection
{
public:
	TArray<struct FSubdividedQuad>               SubdividedQuads;                                   // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct EditableMesh.SubdividedWireEdge
struct FSubdividedWireEdge
{
public:
	int32                                        EdgeVertex0PositionIndex;                          // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EdgeVertex1PositionIndex;                          // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1998[0x4];                                     
};

// 0x30 (0x30 - 0x0)
// ScriptStruct EditableMesh.SubdivisionLimitData
struct FSubdivisionLimitData
{
public:
	TArray<struct FVector>                       VertexPositions;                                   // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSubdivisionLimitSection>      Sections;                                          // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSubdividedWireEdge>           SubdividedWireEdges;                               // 0x20(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct EditableMesh.RenderingPolygonGroup
struct FRenderingPolygonGroup
{
public:
	uint32                                       RenderingSectionIndex;                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialIndex;                                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxTriangles;                                      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1999[0x3C];                                    
};

// 0x0 (0x4 - 0x4)
// ScriptStruct EditableMesh.TriangleID
struct FTriangleID : public FElementID
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct EditableMesh.RenderingPolygon
struct FRenderingPolygon
{
public:
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_199A[0x4];                                     
	TArray<struct FTriangleID>                   TriangulatedPolygonTriangleIndices;                // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
