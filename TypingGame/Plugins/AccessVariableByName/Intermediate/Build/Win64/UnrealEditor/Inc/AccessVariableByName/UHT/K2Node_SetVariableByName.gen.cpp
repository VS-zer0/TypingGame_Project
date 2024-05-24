// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccessVariableByName/Public/K2Node_SetVariableByName.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_SetVariableByName() {}

// Begin Cross Module References
ACCESSVARIABLEBYNAME_API UClass* Z_Construct_UClass_UK2Node_SetVariableByNameNode();
ACCESSVARIABLEBYNAME_API UClass* Z_Construct_UClass_UK2Node_SetVariableByNameNode_NoRegister();
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
UPackage* Z_Construct_UPackage__Script_AccessVariableByName();
// End Cross Module References

// Begin Class UK2Node_SetVariableByNameNode
void UK2Node_SetVariableByNameNode::StaticRegisterNativesUK2Node_SetVariableByNameNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_SetVariableByNameNode);
UClass* Z_Construct_UClass_UK2Node_SetVariableByNameNode_NoRegister()
{
	return UK2Node_SetVariableByNameNode::StaticClass();
}
struct Z_Construct_UClass_UK2Node_SetVariableByNameNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_SetVariableByName.h" },
		{ "ModuleRelativePath", "Public/K2Node_SetVariableByName.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeGenerationClass_MetaData[] = {
		{ "Category", "Access Variable Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Include variables from a generation class (UBlueprint) if true.\n" },
#endif
		{ "ModuleRelativePath", "Public/K2Node_SetVariableByName.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Include variables from a generation class (UBlueprint) if true." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExtendIfNotPresent_MetaData[] = {
		{ "Category", "Container Type Access Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Create elements automatically if true when the element does not present.\n" },
#endif
		{ "ModuleRelativePath", "Public/K2Node_SetVariableByName.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create elements automatically if true when the element does not present." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIncludeGenerationClass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeGenerationClass;
	static void NewProp_bExtendIfNotPresent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtendIfNotPresent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_SetVariableByNameNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UK2Node_SetVariableByNameNode_Statics::NewProp_bIncludeGenerationClass_SetBit(void* Obj)
{
	((UK2Node_SetVariableByNameNode*)Obj)->bIncludeGenerationClass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_SetVariableByNameNode_Statics::NewProp_bIncludeGenerationClass = { "bIncludeGenerationClass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UK2Node_SetVariableByNameNode), &Z_Construct_UClass_UK2Node_SetVariableByNameNode_Statics::NewProp_bIncludeGenerationClass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeGenerationClass_MetaData), NewProp_bIncludeGenerationClass_MetaData) };
void Z_Construct_UClass_UK2Node_SetVariableByNameNode_Statics::NewProp_bExtendIfNotPresent_SetBit(void* Obj)
{
	((UK2Node_SetVariableByNameNode*)Obj)->bExtendIfNotPresent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_SetVariableByNameNode_Statics::NewProp_bExtendIfNotPresent = { "bExtendIfNotPresent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UK2Node_SetVariableByNameNode), &Z_Construct_UClass_UK2Node_SetVariableByNameNode_Statics::NewProp_bExtendIfNotPresent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExtendIfNotPresent_MetaData), NewProp_bExtendIfNotPresent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_SetVariableByNameNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_SetVariableByNameNode_Statics::NewProp_bIncludeGenerationClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_SetVariableByNameNode_Statics::NewProp_bExtendIfNotPresent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_SetVariableByNameNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UK2Node_SetVariableByNameNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node,
	(UObject* (*)())Z_Construct_UPackage__Script_AccessVariableByName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_SetVariableByNameNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_SetVariableByNameNode_Statics::ClassParams = {
	&UK2Node_SetVariableByNameNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UK2Node_SetVariableByNameNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_SetVariableByNameNode_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_SetVariableByNameNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_SetVariableByNameNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UK2Node_SetVariableByNameNode()
{
	if (!Z_Registration_Info_UClass_UK2Node_SetVariableByNameNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_SetVariableByNameNode.OuterSingleton, Z_Construct_UClass_UK2Node_SetVariableByNameNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_SetVariableByNameNode.OuterSingleton;
}
template<> ACCESSVARIABLEBYNAME_API UClass* StaticClass<UK2Node_SetVariableByNameNode>()
{
	return UK2Node_SetVariableByNameNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_SetVariableByNameNode);
UK2Node_SetVariableByNameNode::~UK2Node_SetVariableByNameNode() {}
// End Class UK2Node_SetVariableByNameNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_AccessVariableByName_Public_K2Node_SetVariableByName_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_SetVariableByNameNode, UK2Node_SetVariableByNameNode::StaticClass, TEXT("UK2Node_SetVariableByNameNode"), &Z_Registration_Info_UClass_UK2Node_SetVariableByNameNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_SetVariableByNameNode), 19076253U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_AccessVariableByName_Public_K2Node_SetVariableByName_h_1132523207(TEXT("/Script/AccessVariableByName"),
	Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_AccessVariableByName_Public_K2Node_SetVariableByName_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_AccessVariableByName_Public_K2Node_SetVariableByName_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
