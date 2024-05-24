// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccessVariableByName/Public/K2Node_GetVariableByName.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_GetVariableByName() {}

// Begin Cross Module References
ACCESSVARIABLEBYNAME_API UClass* Z_Construct_UClass_UK2Node_GetVariableByNameNode();
ACCESSVARIABLEBYNAME_API UClass* Z_Construct_UClass_UK2Node_GetVariableByNameNode_NoRegister();
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
UPackage* Z_Construct_UPackage__Script_AccessVariableByName();
// End Cross Module References

// Begin Class UK2Node_GetVariableByNameNode
void UK2Node_GetVariableByNameNode::StaticRegisterNativesUK2Node_GetVariableByNameNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_GetVariableByNameNode);
UClass* Z_Construct_UClass_UK2Node_GetVariableByNameNode_NoRegister()
{
	return UK2Node_GetVariableByNameNode::StaticClass();
}
struct Z_Construct_UClass_UK2Node_GetVariableByNameNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_GetVariableByName.h" },
		{ "ModuleRelativePath", "Public/K2Node_GetVariableByName.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPureNode_MetaData[] = {
		{ "Category", "Node Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Make node a pure node if true.\n" },
#endif
		{ "ModuleRelativePath", "Public/K2Node_GetVariableByName.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Make node a pure node if true." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeGenerationClass_MetaData[] = {
		{ "Category", "Access Variable Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Include variables from a generation class (UBlueprint) if true.\n" },
#endif
		{ "ModuleRelativePath", "Public/K2Node_GetVariableByName.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Include variables from a generation class (UBlueprint) if true." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bPureNode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPureNode;
	static void NewProp_bIncludeGenerationClass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeGenerationClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GetVariableByNameNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UK2Node_GetVariableByNameNode_Statics::NewProp_bPureNode_SetBit(void* Obj)
{
	((UK2Node_GetVariableByNameNode*)Obj)->bPureNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_GetVariableByNameNode_Statics::NewProp_bPureNode = { "bPureNode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UK2Node_GetVariableByNameNode), &Z_Construct_UClass_UK2Node_GetVariableByNameNode_Statics::NewProp_bPureNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPureNode_MetaData), NewProp_bPureNode_MetaData) };
void Z_Construct_UClass_UK2Node_GetVariableByNameNode_Statics::NewProp_bIncludeGenerationClass_SetBit(void* Obj)
{
	((UK2Node_GetVariableByNameNode*)Obj)->bIncludeGenerationClass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_GetVariableByNameNode_Statics::NewProp_bIncludeGenerationClass = { "bIncludeGenerationClass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UK2Node_GetVariableByNameNode), &Z_Construct_UClass_UK2Node_GetVariableByNameNode_Statics::NewProp_bIncludeGenerationClass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeGenerationClass_MetaData), NewProp_bIncludeGenerationClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_GetVariableByNameNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetVariableByNameNode_Statics::NewProp_bPureNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetVariableByNameNode_Statics::NewProp_bIncludeGenerationClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetVariableByNameNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UK2Node_GetVariableByNameNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node,
	(UObject* (*)())Z_Construct_UPackage__Script_AccessVariableByName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetVariableByNameNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GetVariableByNameNode_Statics::ClassParams = {
	&UK2Node_GetVariableByNameNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UK2Node_GetVariableByNameNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetVariableByNameNode_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetVariableByNameNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_GetVariableByNameNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UK2Node_GetVariableByNameNode()
{
	if (!Z_Registration_Info_UClass_UK2Node_GetVariableByNameNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_GetVariableByNameNode.OuterSingleton, Z_Construct_UClass_UK2Node_GetVariableByNameNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_GetVariableByNameNode.OuterSingleton;
}
template<> ACCESSVARIABLEBYNAME_API UClass* StaticClass<UK2Node_GetVariableByNameNode>()
{
	return UK2Node_GetVariableByNameNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GetVariableByNameNode);
UK2Node_GetVariableByNameNode::~UK2Node_GetVariableByNameNode() {}
// End Class UK2Node_GetVariableByNameNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_AccessVariableByName_Public_K2Node_GetVariableByName_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_GetVariableByNameNode, UK2Node_GetVariableByNameNode::StaticClass, TEXT("UK2Node_GetVariableByNameNode"), &Z_Registration_Info_UClass_UK2Node_GetVariableByNameNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_GetVariableByNameNode), 1864924702U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_AccessVariableByName_Public_K2Node_GetVariableByName_h_2310205957(TEXT("/Script/AccessVariableByName"),
	Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_AccessVariableByName_Public_K2Node_GetVariableByName_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_AccessVariableByName_Public_K2Node_GetVariableByName_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
