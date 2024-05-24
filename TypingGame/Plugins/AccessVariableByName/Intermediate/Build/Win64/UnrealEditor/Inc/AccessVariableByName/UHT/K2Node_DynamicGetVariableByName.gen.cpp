// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccessVariableByName/Public/K2Node_DynamicGetVariableByName.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_DynamicGetVariableByName() {}

// Begin Cross Module References
ACCESSVARIABLEBYNAME_API UClass* Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode();
ACCESSVARIABLEBYNAME_API UClass* Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_NoRegister();
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType();
UPackage* Z_Construct_UPackage__Script_AccessVariableByName();
// End Cross Module References

// Begin Class UK2Node_DynamicGetVariableByNameNode
void UK2Node_DynamicGetVariableByNameNode::StaticRegisterNativesUK2Node_DynamicGetVariableByNameNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_DynamicGetVariableByNameNode);
UClass* Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_NoRegister()
{
	return UK2Node_DynamicGetVariableByNameNode::StaticClass();
}
struct Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_DynamicGetVariableByName.h" },
		{ "ModuleRelativePath", "Public/K2Node_DynamicGetVariableByName.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariantPinType_MetaData[] = {
		{ "ModuleRelativePath", "Public/K2Node_DynamicGetVariableByName.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPureNode_MetaData[] = {
		{ "Category", "Node Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Make node a pure node if true.\n" },
#endif
		{ "ModuleRelativePath", "Public/K2Node_DynamicGetVariableByName.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Make node a pure node if true." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSinglePrecision_MetaData[] = {
		{ "Category", "Access Variable Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Access float variable as a single precision float variable.\n" },
#endif
		{ "ModuleRelativePath", "Public/K2Node_DynamicGetVariableByName.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Access float variable as a single precision float variable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeGenerationClass_MetaData[] = {
		{ "Category", "Access Variable Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Include variables from a generation class (UBlueprint) if true.\n" },
#endif
		{ "ModuleRelativePath", "Public/K2Node_DynamicGetVariableByName.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Include variables from a generation class (UBlueprint) if true." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariantPinType;
	static void NewProp_bPureNode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPureNode;
	static void NewProp_bSinglePrecision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSinglePrecision;
	static void NewProp_bIncludeGenerationClass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeGenerationClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_DynamicGetVariableByNameNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_Statics::NewProp_VariantPinType = { "VariantPinType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_DynamicGetVariableByNameNode, VariantPinType), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariantPinType_MetaData), NewProp_VariantPinType_MetaData) }; // 831943823
void Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_Statics::NewProp_bPureNode_SetBit(void* Obj)
{
	((UK2Node_DynamicGetVariableByNameNode*)Obj)->bPureNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_Statics::NewProp_bPureNode = { "bPureNode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UK2Node_DynamicGetVariableByNameNode), &Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_Statics::NewProp_bPureNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPureNode_MetaData), NewProp_bPureNode_MetaData) };
void Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_Statics::NewProp_bSinglePrecision_SetBit(void* Obj)
{
	((UK2Node_DynamicGetVariableByNameNode*)Obj)->bSinglePrecision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_Statics::NewProp_bSinglePrecision = { "bSinglePrecision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UK2Node_DynamicGetVariableByNameNode), &Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_Statics::NewProp_bSinglePrecision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSinglePrecision_MetaData), NewProp_bSinglePrecision_MetaData) };
void Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_Statics::NewProp_bIncludeGenerationClass_SetBit(void* Obj)
{
	((UK2Node_DynamicGetVariableByNameNode*)Obj)->bIncludeGenerationClass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_Statics::NewProp_bIncludeGenerationClass = { "bIncludeGenerationClass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UK2Node_DynamicGetVariableByNameNode), &Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_Statics::NewProp_bIncludeGenerationClass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeGenerationClass_MetaData), NewProp_bIncludeGenerationClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_Statics::NewProp_VariantPinType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_Statics::NewProp_bPureNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_Statics::NewProp_bSinglePrecision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_Statics::NewProp_bIncludeGenerationClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node,
	(UObject* (*)())Z_Construct_UPackage__Script_AccessVariableByName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_Statics::ClassParams = {
	&UK2Node_DynamicGetVariableByNameNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode()
{
	if (!Z_Registration_Info_UClass_UK2Node_DynamicGetVariableByNameNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_DynamicGetVariableByNameNode.OuterSingleton, Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_DynamicGetVariableByNameNode.OuterSingleton;
}
template<> ACCESSVARIABLEBYNAME_API UClass* StaticClass<UK2Node_DynamicGetVariableByNameNode>()
{
	return UK2Node_DynamicGetVariableByNameNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_DynamicGetVariableByNameNode);
UK2Node_DynamicGetVariableByNameNode::~UK2Node_DynamicGetVariableByNameNode() {}
// End Class UK2Node_DynamicGetVariableByNameNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_AccessVariableByName_Public_K2Node_DynamicGetVariableByName_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_DynamicGetVariableByNameNode, UK2Node_DynamicGetVariableByNameNode::StaticClass, TEXT("UK2Node_DynamicGetVariableByNameNode"), &Z_Registration_Info_UClass_UK2Node_DynamicGetVariableByNameNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_DynamicGetVariableByNameNode), 2854996779U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_AccessVariableByName_Public_K2Node_DynamicGetVariableByName_h_4114336436(TEXT("/Script/AccessVariableByName"),
	Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_AccessVariableByName_Public_K2Node_DynamicGetVariableByName_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_AccessVariableByName_Public_K2Node_DynamicGetVariableByName_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
