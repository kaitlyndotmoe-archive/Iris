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

// 0x18 (0x18 - 0x0)
// Function EditableMesh.EditableMesh.WeldVertices
struct UEditableMesh_WeldVertices_Params
{
public:
	TArray<struct FVertexID>                     VertexIDs;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVertexID                             OutNewVertexID;                                    // 0x10(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_195D[0x4];                                     
};

// 0xC (0xC - 0x0)
// Function EditableMesh.EditableMesh.TryToRemoveVertex
struct UEditableMesh_TryToRemoveVertex_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutWasVertexRemoved;                              // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_195E[0x3];                                     
	struct FEdgeID                               OutNewEdgeID;                                      // 0x8(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function EditableMesh.EditableMesh.TryToRemovePolygonEdge
struct UEditableMesh_TryToRemovePolygonEdge_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutWasEdgeRemoved;                                // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_195F[0x3];                                     
	struct FPolygonID                            OutNewPolygonID;                                   // 0x8(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function EditableMesh.EditableMesh.TriangulatePolygons
struct UEditableMesh_TriangulatePolygons_Params
{
public:
	TArray<struct FPolygonID>                    PolygonIDs;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                    OutNewTrianglePolygons;                            // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function EditableMesh.EditableMesh.TessellatePolygons
struct UEditableMesh_TessellatePolygons_Params
{
public:
	TArray<struct FPolygonID>                    PolygonIDs;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	enum class ETriangleTessellationMode         TriangleTessellationMode;                          // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1960[0x7];                                     
	TArray<struct FPolygonID>                    OutNewPolygonIDs;                                  // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function EditableMesh.EditableMesh.StartModification
struct UEditableMesh_StartModification_Params
{
public:
	enum class EMeshModificationType             MeshModificationType;                              // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMeshTopologyChange               MeshTopologyChange;                                // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function EditableMesh.EditableMesh.SplitPolygons
struct UEditableMesh_SplitPolygons_Params
{
public:
	TArray<struct FPolygonToSplit>               PolygonsToSplit;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                       OutNewEdgeIDs;                                     // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function EditableMesh.EditableMesh.SplitEdge
struct UEditableMesh_SplitEdge_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1961[0x4];                                     
	TArray<float>                                Splits;                                            // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVertexID>                     OutNewVertexIDs;                                   // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function EditableMesh.EditableMesh.SetVerticesCornerSharpness
struct UEditableMesh_SetVerticesCornerSharpness_Params
{
public:
	TArray<struct FVertexID>                     VertexIDs;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<float>                                VerticesNewCornerSharpness;                        // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EditableMesh.EditableMesh.SetVerticesAttributes
struct UEditableMesh_SetVerticesAttributes_Params
{
public:
	TArray<struct FAttributesForVertex>          AttributesForVertices;                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EditableMesh.EditableMesh.SetVertexInstancesAttributes
struct UEditableMesh_SetVertexInstancesAttributes_Params
{
public:
	TArray<struct FAttributesForVertexInstance>  AttributesForVertexInstances;                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EditableMesh.EditableMesh.SetTextureCoordinateCount
struct UEditableMesh_SetTextureCoordinateCount_Params
{
public:
	int32                                        NumTexCoords;                                      // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EditableMesh.EditableMesh.SetSubdivisionCount
struct UEditableMesh_SetSubdivisionCount_Params
{
public:
	int32                                        NewSubdivisionCount;                               // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes
struct UEditableMesh_SetPolygonsVertexAttributes_Params
{
public:
	TArray<struct FVertexAttributesForPolygon>   VertexAttributesForPolygons;                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EditableMesh.EditableMesh.SetEdgesVertices
struct UEditableMesh_SetEdgesVertices_Params
{
public:
	TArray<struct FVerticesForEdge>              VerticesForEdges;                                  // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically
struct UEditableMesh_SetEdgesHardnessAutomatically_Params
{
public:
	TArray<struct FEdgeID>                       EdgeIDs;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        MaxDotProductForSoftEdge;                          // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1962[0x4];                                     
};

// 0x20 (0x20 - 0x0)
// Function EditableMesh.EditableMesh.SetEdgesHardness
struct UEditableMesh_SetEdgesHardness_Params
{
public:
	TArray<struct FEdgeID>                       EdgeIDs;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<bool>                                 EdgesNewIsHard;                                    // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness
struct UEditableMesh_SetEdgesCreaseSharpness_Params
{
public:
	TArray<struct FEdgeID>                       EdgeIDs;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<float>                                EdgesNewCreaseSharpness;                           // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EditableMesh.EditableMesh.SetEdgesAttributes
struct UEditableMesh_SetEdgesAttributes_Params
{
public:
	TArray<struct FAttributesForEdge>            AttributesForEdges;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EditableMesh.EditableMesh.SetAllowUndo
struct UEditableMesh_SetAllowUndo_Params
{
public:
	bool                                         bInAllowUndo;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EditableMesh.EditableMesh.SetAllowSpatialDatabase
struct UEditableMesh_SetAllowSpatialDatabase_Params
{
public:
	bool                                         bInAllowSpatialDatabase;                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EditableMesh.EditableMesh.SetAllowCompact
struct UEditableMesh_SetAllowCompact_Params
{
public:
	bool                                         bInAllowCompact;                                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
struct UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Params
{
public:
	struct FVector                               LineSegmentStart;                                  // 0x0(0xC)(ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LineSegmentEnd;                                    // 0xC(0xC)(ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                    OutPolygons;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EditableMesh.EditableMesh.RevertInstance
struct UEditableMesh_RevertInstance_Params
{
public:
	class UEditableMesh*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EditableMesh.EditableMesh.Revert
struct UEditableMesh_Revert_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function EditableMesh.EditableMesh.RemovePolygonPerimeterVertices
struct UEditableMesh_RemovePolygonPerimeterVertices_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FirstVertexNumberToRemove;                         // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumVerticesToRemove;                               // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeleteOrphanedVertexInstances;                    // 0xC(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1963[0x3];                                     
};

// 0x0 (0x0 - 0x0)
// Function EditableMesh.EditableMesh.RebuildRenderMesh
struct UEditableMesh_RebuildRenderMesh_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function EditableMesh.EditableMesh.QuadrangulateMesh
struct UEditableMesh_QuadrangulateMesh_Params
{
public:
	TArray<struct FPolygonID>                    OutNewPolygonIDs;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EditableMesh.EditableMesh.PropagateInstanceChanges
struct UEditableMesh_PropagateInstanceChanges_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function EditableMesh.EditableMesh.MoveVertices
struct UEditableMesh_MoveVertices_Params
{
public:
	TArray<struct FVertexToMove>                 VerticesToMove;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EditableMesh.EditableMesh.MakeVertexID
struct UEditableMesh_MakeVertexID_Params
{
public:
	int32                                        VertexIndex;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                             ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EditableMesh.EditableMesh.MakePolygonID
struct UEditableMesh_MakePolygonID_Params
{
public:
	int32                                        PolygonIndex;                                      // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                            ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EditableMesh.EditableMesh.MakePolygonGroupID
struct UEditableMesh_MakePolygonGroupID_Params
{
public:
	int32                                        PolygonGroupIndex;                                 // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonGroupID                       ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EditableMesh.EditableMesh.MakeEdgeID
struct UEditableMesh_MakeEdgeID_Params
{
public:
	int32                                        EdgeIndex;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEdgeID                               ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EditableMesh.EditableMesh.IsValidVertex
struct UEditableMesh_IsValidVertex_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1964[0x3];                                     
};

// 0x8 (0x8 - 0x0)
// Function EditableMesh.EditableMesh.IsValidPolygonGroup
struct UEditableMesh_IsValidPolygonGroup_Params
{
public:
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1965[0x3];                                     
};

// 0x8 (0x8 - 0x0)
// Function EditableMesh.EditableMesh.IsValidPolygon
struct UEditableMesh_IsValidPolygon_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1966[0x3];                                     
};

// 0x8 (0x8 - 0x0)
// Function EditableMesh.EditableMesh.IsValidEdge
struct UEditableMesh_IsValidEdge_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1967[0x3];                                     
};

// 0x1 (0x1 - 0x0)
// Function EditableMesh.EditableMesh.IsUndoAllowed
struct UEditableMesh_IsUndoAllowed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed
struct UEditableMesh_IsSpatialDatabaseAllowed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EditableMesh.EditableMesh.IsPreviewingSubdivisions
struct UEditableMesh_IsPreviewingSubdivisions_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EditableMesh.EditableMesh.IsOrphanedVertex
struct UEditableMesh_IsOrphanedVertex_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1968[0x3];                                     
};

// 0x1 (0x1 - 0x0)
// Function EditableMesh.EditableMesh.IsCompactAllowed
struct UEditableMesh_IsCompactAllowed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EditableMesh.EditableMesh.IsCommittedAsInstance
struct UEditableMesh_IsCommittedAsInstance_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EditableMesh.EditableMesh.IsCommitted
struct UEditableMesh_IsCommitted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EditableMesh.EditableMesh.IsBeingModified
struct UEditableMesh_IsBeingModified_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EditableMesh.EditableMesh.InvalidVertexID
struct UEditableMesh_InvalidVertexID_Params
{
public:
	struct FVertexID                             ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EditableMesh.EditableMesh.InvalidPolygonID
struct UEditableMesh_InvalidPolygonID_Params
{
public:
	struct FPolygonID                            ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EditableMesh.EditableMesh.InvalidPolygonGroupID
struct UEditableMesh_InvalidPolygonGroupID_Params
{
public:
	struct FPolygonGroupID                       ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EditableMesh.EditableMesh.InvalidEdgeID
struct UEditableMesh_InvalidEdgeID_Params
{
public:
	struct FEdgeID                               ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function EditableMesh.EditableMesh.InsetPolygons
struct UEditableMesh_InsetPolygons_Params
{
public:
	TArray<struct FPolygonID>                    PolygonIDs;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        InsetFixedDistance;                                // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InsetProgressTowardCenter;                         // 0x14(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInsetPolygonsMode                Mode;                                              // 0x18(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1969[0x7];                                     
	TArray<struct FPolygonID>                    OutNewCenterPolygonIDs;                            // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                    OutNewSidePolygonIDs;                              // 0x30(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EditableMesh.EditableMesh.InsertPolygonPerimeterVertices
struct UEditableMesh_InsertPolygonPerimeterVertices_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InsertBeforeVertexNumber;                          // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVertexAndAttributes>          VerticesToInsert;                                  // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function EditableMesh.EditableMesh.InsertEdgeLoop
struct UEditableMesh_InsertEdgeLoop_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_196A[0x4];                                     
	TArray<float>                                Splits;                                            // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                       OutNewEdgeIDs;                                     // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EditableMesh.EditableMesh.InitializeAdapters
struct UEditableMesh_InitializeAdapters_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function EditableMesh.EditableMesh.GetVertexPairEdge
struct UEditableMesh_GetVertexPairEdge_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                             NextVertexID;                                      // 0x4(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutEdgeWindingIsReversed;                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_196B[0x3];                                     
	struct FEdgeID                               ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EditableMesh.EditableMesh.GetVertexInstanceVertex
struct UEditableMesh_GetVertexInstanceVertex_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                             ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EditableMesh.EditableMesh.GetVertexInstanceCount
struct UEditableMesh_GetVertexInstanceCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons
struct UEditableMesh_GetVertexInstanceConnectedPolygons_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_196C[0x4];                                     
	TArray<struct FPolygonID>                    OutConnectedPolygonIDs;                            // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount
struct UEditableMesh_GetVertexInstanceConnectedPolygonCount_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon
struct UEditableMesh_GetVertexInstanceConnectedPolygon_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConnectedPolygonNumber;                            // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                            ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EditableMesh.EditableMesh.GetVertexCount
struct UEditableMesh_GetVertexCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EditableMesh.EditableMesh.GetVertexConnectedPolygons
struct UEditableMesh_GetVertexConnectedPolygons_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_196D[0x4];                                     
	TArray<struct FPolygonID>                    OutConnectedPolygonIDs;                            // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EditableMesh.EditableMesh.GetVertexConnectedEdges
struct UEditableMesh_GetVertexConnectedEdges_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_196E[0x4];                                     
	TArray<struct FEdgeID>                       OutConnectedEdgeIDs;                               // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount
struct UEditableMesh_GetVertexConnectedEdgeCount_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function EditableMesh.EditableMesh.GetVertexConnectedEdge
struct UEditableMesh_GetVertexConnectedEdge_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConnectedEdgeNumber;                               // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEdgeID                               ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EditableMesh.EditableMesh.GetVertexAdjacentVertices
struct UEditableMesh_GetVertexAdjacentVertices_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_196F[0x4];                                     
	TArray<struct FVertexID>                     OutAdjacentVertexIDs;                              // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EditableMesh.EditableMesh.GetTextureCoordinateCount
struct UEditableMesh_GetTextureCoordinateCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function EditableMesh.EditableMesh.GetSubdivisionLimitData
struct UEditableMesh_GetSubdivisionLimitData_Params
{
public:
	struct FSubdivisionLimitData                 ReturnValue;                                       // 0x0(0x30)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EditableMesh.EditableMesh.GetSubdivisionCount
struct UEditableMesh_GetSubdivisionCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount
struct UEditableMesh_GetPolygonTriangulatedTriangleCount_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle
struct UEditableMesh_GetPolygonTriangulatedTriangle_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PolygonTriangleNumber;                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMeshTriangle                         ReturnValue;                                       // 0x8(0xC)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices
struct UEditableMesh_GetPolygonPerimeterVertices_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1970[0x4];                                     
	TArray<struct FVertexID>                     OutPolygonPerimeterVertexIDs;                      // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances
struct UEditableMesh_GetPolygonPerimeterVertexInstances_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1971[0x4];                                     
	TArray<struct FVertexInstanceID>             OutPolygonPerimeterVertexInstanceIDs;              // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance
struct UEditableMesh_GetPolygonPerimeterVertexInstance_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PolygonVertexNumber;                               // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexInstanceID                     ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount
struct UEditableMesh_GetPolygonPerimeterVertexCount_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex
struct UEditableMesh_GetPolygonPerimeterVertex_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PolygonVertexNumber;                               // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                             ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges
struct UEditableMesh_GetPolygonPerimeterEdges_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1972[0x4];                                     
	TArray<struct FEdgeID>                       OutPolygonPerimeterEdgeIDs;                        // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount
struct UEditableMesh_GetPolygonPerimeterEdgeCount_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge
struct UEditableMesh_GetPolygonPerimeterEdge_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PerimeterEdgeNumber;                               // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutEdgeWindingIsReversedForPolygon;               // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1973[0x3];                                     
	struct FEdgeID                               ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function EditableMesh.EditableMesh.GetPolygonInGroup
struct UEditableMesh_GetPolygonInGroup_Params
{
public:
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PolygonNumber;                                     // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                            ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EditableMesh.EditableMesh.GetPolygonHoleVertices
struct UEditableMesh_GetPolygonHoleVertices_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HoleNumber;                                        // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVertexID>                     OutHoleVertexIDs;                                  // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EditableMesh.EditableMesh.GetPolygonHoleVertexInstances
struct UEditableMesh_GetPolygonHoleVertexInstances_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HoleNumber;                                        // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVertexInstanceID>             OutHoleVertexInstanceIDs;                          // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EditableMesh.EditableMesh.GetPolygonHoleVertexInstance
struct UEditableMesh_GetPolygonHoleVertexInstance_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HoleNumber;                                        // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PolygonVertexNumber;                               // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexInstanceID                     ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function EditableMesh.EditableMesh.GetPolygonHoleVertexCount
struct UEditableMesh_GetPolygonHoleVertexCount_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HoleNumber;                                        // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EditableMesh.EditableMesh.GetPolygonHoleVertex
struct UEditableMesh_GetPolygonHoleVertex_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HoleNumber;                                        // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PolygonVertexNumber;                               // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                             ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EditableMesh.EditableMesh.GetPolygonHoleEdges
struct UEditableMesh_GetPolygonHoleEdges_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HoleNumber;                                        // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                       OutHoleEdgeIDs;                                    // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function EditableMesh.EditableMesh.GetPolygonHoleEdgeCount
struct UEditableMesh_GetPolygonHoleEdgeCount_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HoleNumber;                                        // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EditableMesh.EditableMesh.GetPolygonHoleEdge
struct UEditableMesh_GetPolygonHoleEdge_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HoleNumber;                                        // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HoleEdgeNumber;                                    // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEdgeID                               ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EditableMesh.EditableMesh.GetPolygonHoleCount
struct UEditableMesh_GetPolygonHoleCount_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EditableMesh.EditableMesh.GetPolygonGroupCount
struct UEditableMesh_GetPolygonGroupCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EditableMesh.EditableMesh.GetPolygonCountInGroup
struct UEditableMesh_GetPolygonCountInGroup_Params
{
public:
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EditableMesh.EditableMesh.GetPolygonCount
struct UEditableMesh_GetPolygonCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons
struct UEditableMesh_GetPolygonAdjacentPolygons_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1974[0x4];                                     
	TArray<struct FPolygonID>                    OutAdjacentPolygons;                               // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EditableMesh.EditableMesh.GetGroupForPolygon
struct UEditableMesh_GetGroupForPolygon_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonGroupID                       ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup
struct UEditableMesh_GetFirstValidPolygonGroup_Params
{
public:
	struct FPolygonGroupID                       ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function EditableMesh.EditableMesh.GetEdgeVertices
struct UEditableMesh_GetEdgeVertices_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                             OutEdgeVertexID0;                                  // 0x4(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                             OutEdgeVertexID1;                                  // 0x8(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function EditableMesh.EditableMesh.GetEdgeVertex
struct UEditableMesh_GetEdgeVertex_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EdgeVertexNumber;                                  // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                             ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices
struct UEditableMesh_GetEdgeThatConnectsVertices_Params
{
public:
	struct FVertexID                             VertexID0;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                             VertexID1;                                         // 0x4(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEdgeID                               ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EditableMesh.EditableMesh.GetEdgeLoopElements
struct UEditableMesh_GetEdgeLoopElements_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1975[0x4];                                     
	TArray<struct FEdgeID>                       EdgeLoopIDs;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EditableMesh.EditableMesh.GetEdgeCount
struct UEditableMesh_GetEdgeCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons
struct UEditableMesh_GetEdgeConnectedPolygons_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1976[0x4];                                     
	TArray<struct FPolygonID>                    OutConnectedPolygonIDs;                            // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount
struct UEditableMesh_GetEdgeConnectedPolygonCount_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon
struct UEditableMesh_GetEdgeConnectedPolygon_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConnectedPolygonNumber;                            // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                            ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals
struct UEditableMesh_GeneratePolygonTangentsAndNormals_Params
{
public:
	TArray<struct FPolygonID>                    PolygonIDs;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EditableMesh.EditableMesh.FlipPolygons
struct UEditableMesh_FlipPolygons_Params
{
public:
	TArray<struct FPolygonID>                    PolygonIDs;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex
struct UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                             VertexID;                                          // 0x4(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices
struct UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                             EdgeVertexID0;                                     // 0x4(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                             EdgeVertexID1;                                     // 0x8(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function EditableMesh.EditableMesh.FindPolygonLoop
struct UEditableMesh_FindPolygonLoop_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1977[0x4];                                     
	TArray<struct FEdgeID>                       OutEdgeLoopEdgeIDs;                                // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                       OutFlippedEdgeIDs;                                 // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                       OutReversedEdgeIDPathToTake;                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                    OutPolygonIDsToSplit;                              // 0x38(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EditableMesh.EditableMesh.FindPolygonHoleVertexNumberForVertex
struct UEditableMesh_FindPolygonHoleVertexNumberForVertex_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HoleNumber;                                        // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                             VertexID;                                          // 0x8(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function EditableMesh.EditableMesh.FindPolygonHoleEdgeNumberForVertices
struct UEditableMesh_FindPolygonHoleEdgeNumberForVertices_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HoleNumber;                                        // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                             EdgeVertexID0;                                     // 0x8(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                             EdgeVertexID1;                                     // 0xC(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function EditableMesh.EditableMesh.ExtrudePolygons
struct UEditableMesh_ExtrudePolygons_Params
{
public:
	TArray<struct FPolygonID>                    Polygons;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        ExtrudeDistance;                                   // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKeepNeighborsTogether;                            // 0x14(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1978[0x3];                                     
	TArray<struct FPolygonID>                    OutNewExtrudedFrontPolygons;                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function EditableMesh.EditableMesh.ExtendVertices
struct UEditableMesh_ExtendVertices_Params
{
public:
	TArray<struct FVertexID>                     VertexIDs;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bOnlyExtendClosestEdge;                            // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1979[0x3];                                     
	struct FVector                               ReferencePosition;                                 // 0x14(0xC)(ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVertexID>                     OutNewExtendedVertexIDs;                           // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function EditableMesh.EditableMesh.ExtendEdges
struct UEditableMesh_ExtendEdges_Params
{
public:
	TArray<struct FEdgeID>                       EdgeIDs;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bWeldNeighbors;                                    // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197A[0x7];                                     
	TArray<struct FEdgeID>                       OutNewExtendedEdgeIDs;                             // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EditableMesh.EditableMesh.EndModification
struct UEditableMesh_EndModification_Params
{
public:
	bool                                         bFromUndo;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EditableMesh.EditableMesh.DeleteVertexInstances
struct UEditableMesh_DeleteVertexInstances_Params
{
public:
	TArray<struct FVertexInstanceID>             VertexInstanceIDsToDelete;                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bDeleteOrphanedVertices;                           // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197B[0x7];                                     
};

// 0x8 (0x8 - 0x0)
// Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons
struct UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeleteOrphanedEdges;                              // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeleteOrphanedVertices;                           // 0x5(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeleteOrphanedVertexInstances;                    // 0x6(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeleteEmptyPolygonGroups;                         // 0x7(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EditableMesh.EditableMesh.DeletePolygons
struct UEditableMesh_DeletePolygons_Params
{
public:
	TArray<struct FPolygonID>                    PolygonIDsToDelete;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bDeleteOrphanedEdges;                              // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeleteOrphanedVertices;                           // 0x11(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeleteOrphanedVertexInstances;                    // 0x12(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeleteEmptyPolygonGroups;                         // 0x13(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197C[0x4];                                     
};

// 0x10 (0x10 - 0x0)
// Function EditableMesh.EditableMesh.DeletePolygonGroups
struct UEditableMesh_DeletePolygonGroups_Params
{
public:
	TArray<struct FPolygonGroupID>               PolygonGroupIDs;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EditableMesh.EditableMesh.DeleteOrphanVertices
struct UEditableMesh_DeleteOrphanVertices_Params
{
public:
	TArray<struct FVertexID>                     VertexIDsToDelete;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EditableMesh.EditableMesh.DeleteEdges
struct UEditableMesh_DeleteEdges_Params
{
public:
	TArray<struct FEdgeID>                       EdgeIDsToDelete;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bDeleteOrphanedVertices;                           // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197D[0x7];                                     
};

// 0x8 (0x8 - 0x0)
// Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons
struct UEditableMesh_DeleteEdgeAndConnectedPolygons_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeleteOrphanedEdges;                              // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeleteOrphanedVertices;                           // 0x5(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeleteOrphanedVertexInstances;                    // 0x6(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeleteEmptyPolygonGroups;                         // 0x7(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function EditableMesh.EditableMesh.CreateVertices
struct UEditableMesh_CreateVertices_Params
{
public:
	TArray<struct FVertexToCreate>               VerticesToCreate;                                  // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVertexID>                     OutNewVertexIDs;                                   // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function EditableMesh.EditableMesh.CreateVertexInstances
struct UEditableMesh_CreateVertexInstances_Params
{
public:
	TArray<struct FVertexInstanceToCreate>       VertexInstancesToCreate;                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVertexInstanceID>             OutNewVertexInstanceIDs;                           // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function EditableMesh.EditableMesh.CreatePolygons
struct UEditableMesh_CreatePolygons_Params
{
public:
	TArray<struct FPolygonToCreate>              PolygonsToCreate;                                  // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                    OutNewPolygonIDs;                                  // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                       OutNewEdgeIDs;                                     // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function EditableMesh.EditableMesh.CreatePolygonGroups
struct UEditableMesh_CreatePolygonGroups_Params
{
public:
	TArray<struct FPolygonGroupToCreate>         PolygonGroupsToCreate;                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FPolygonGroupID>               OutNewPolygonGroupIDs;                             // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges
struct UEditableMesh_CreateMissingPolygonPerimeterEdges_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197E[0x4];                                     
	TArray<struct FEdgeID>                       OutNewEdgeIDs;                                     // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EditableMesh.EditableMesh.CreateMissingPolygonHoleEdges
struct UEditableMesh_CreateMissingPolygonHoleEdges_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HoleNumber;                                        // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                       OutNewEdgeIDs;                                     // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EditableMesh.EditableMesh.CreateEmptyVertexRange
struct UEditableMesh_CreateEmptyVertexRange_Params
{
public:
	int32                                        NumVerticesToCreate;                               // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197F[0x4];                                     
	TArray<struct FVertexID>                     OutNewVertexIDs;                                   // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function EditableMesh.EditableMesh.CreateEdges
struct UEditableMesh_CreateEdges_Params
{
public:
	TArray<struct FEdgeToCreate>                 EdgesToCreate;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                       OutNewEdgeIDs;                                     // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EditableMesh.EditableMesh.ComputePolygonTriangulation
struct UEditableMesh_ComputePolygonTriangulation_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1980[0x4];                                     
	TArray<struct FMeshTriangle>                 OutTriangles;                                      // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges
struct UEditableMesh_ComputePolygonsSharedEdges_Params
{
public:
	TArray<struct FPolygonID>                    PolygonIDs;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                       OutSharedEdgeIDs;                                  // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function EditableMesh.EditableMesh.ComputePolygonPlane
struct UEditableMesh_ComputePolygonPlane_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1981[0xC];                                     
	struct FPlane                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EditableMesh.EditableMesh.ComputePolygonNormal
struct UEditableMesh_ComputePolygonNormal_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x4(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EditableMesh.EditableMesh.ComputePolygonCenter
struct UEditableMesh_ComputePolygonCenter_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x4(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere
struct UEditableMesh_ComputeBoundingBoxAndSphere_Params
{
public:
	struct FBoxSphereBounds                      ReturnValue;                                       // 0x0(0x1C)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function EditableMesh.EditableMesh.ComputeBoundingBox
struct UEditableMesh_ComputeBoundingBox_Params
{
public:
	struct FBox                                  ReturnValue;                                       // 0x0(0x1C)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// Function EditableMesh.EditableMesh.ComputeBarycentricWeightForPointOnPolygon
struct UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PointOnPolygon;                                    // 0x4(0xC)(ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMeshTriangle                         OutTriangle;                                       // 0x10(0xC)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               OutTriangleVertexWeights;                          // 0x1C(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1982[0x3];                                     
};

// 0x10 (0x10 - 0x0)
// Function EditableMesh.EditableMesh.CommitInstance
struct UEditableMesh_CommitInstance_Params
{
public:
	class UPrimitiveComponent*                   ComponentToInstanceTo;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEditableMesh*                         ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EditableMesh.EditableMesh.COMMIT
struct UEditableMesh_COMMIT_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances
struct UEditableMesh_ChangePolygonsVertexInstances_Params
{
public:
	TArray<struct FChangeVertexInstancesForPolygon> VertexInstancesForPolygons;                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function EditableMesh.EditableMesh.BevelPolygons
struct UEditableMesh_BevelPolygons_Params
{
public:
	TArray<struct FPolygonID>                    PolygonIDs;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        BevelFixedDistance;                                // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BevelProgressTowardCenter;                         // 0x14(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                    OutNewCenterPolygonIDs;                            // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPolygonID>                    OutNewSidePolygonIDs;                              // 0x28(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups
struct UEditableMesh_AssignPolygonsToPolygonGroups_Params
{
public:
	TArray<struct FPolygonGroupForPolygon>       PolygonGroupForPolygons;                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bDeleteOrphanedPolygonGroups;                      // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1983[0x7];                                     
};

// 0x1 (0x1 - 0x0)
// Function EditableMesh.EditableMesh.AnyChangesToUndo
struct UEditableMesh_AnyChangesToUndo_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EditableMesh.EditableMeshFactory.MakeEditableMesh
struct UEditableMeshFactory_MakeEditableMesh_Params
{
public:
	class UPrimitiveComponent*                   PrimitiveComponent;                                // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LODIndex;                                          // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1987[0x4];                                     
	class UEditableMesh*                         ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
