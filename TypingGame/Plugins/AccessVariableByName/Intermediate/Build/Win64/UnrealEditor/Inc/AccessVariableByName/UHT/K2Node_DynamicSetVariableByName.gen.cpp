// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccessVariableByName/Public/K2Node_DynamicSetVariableByName.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_DynamicSetVariableByName() {}

// Begin Cross Module References
ACCESSVARIABLEBYNAME_API UClass* Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode();
ACCESSVARIABLEBYNAME_API UClass* Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_NoRegister();
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType();
UPackage* Z_Construct_UPackage__Script_AccessVariableByName();
// End Cross Module References

// Begin Class UK2Node_DynamicSetVariableByNameNode
void UK2Node_DynamicSetVariableByNameNode::StaticRegisterNativesUK2Node_DynamicSetVariableByNameNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_DynamicSetVariableByNameNode);
UClass* Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_NoRegister()
{
	return UK2Node_DynamicSetVariableByNameNode::StaticClass();
}
struct Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_DynamicSetVariableByName.h" },
		{ "ModuleRelativePath", "Public/K2Node_DynamicSetVariableByName.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariantPinType_MetaData[] = {
		{ "ModuleRelativePath", "Public/K2Node_DynamicSetVariableByName.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeGenerationClass_MetaData[] = {
		{ "Category", "Access Variable Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Include variables from a generation class (UBlueprint) if true.\n" },
#endif
		{ "ModuleRelativePath", "Public/K2Node_DynamicSetVariableByName.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Include variables from a generation class (UBlueprint) if true." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSinglePrecision_MetaData[] = {
		{ "Category", "Access Variable Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Access float variable as a single precision float variable.\n" },
#endif
		{ "ModuleRelativePath", "Public/K2Node_DynamicSetVariableByName.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Access float variable as a single precision float variable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExtendIfNotPresent_MetaData[] = {
		{ "Category", "Container Type Access Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Create elements automatically if true when the element does not present.\n" },
#endif
		{ "ModuleRelativePath", "Public/K2Node_DynamicSetVariableByName.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create elements automatically if true when the element does not present." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariantPinType;
	static void NewProp_bIncludeGenerationClass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeGenerationClass;
	static void NewProp_bSinglePrecision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSinglePrecision;
	static void NewProp_bExtendIfNotPresent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtendIfNotPresent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_DynamicSetVariableByNameNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_Statics::NewProp_VariantPinType = { "VariantPinType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_DynamicSetVariableByNameNode, VariantPinType), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariantPinType_MetaData), NewProp_VariantPinType_MetaData) }; // 831943823
void Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_Statics::NewProp_bIncludeGenerationClass_SetBit(void* Obj)
{
	((UK2Node_DynamicSetVariableByNameNode*)Obj)->bIncludeGenerationClass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_Statics::NewProp_bIncludeGenerationClass = { "bIncludeGenerationClass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UK2Node_DynamicSetVariableByNameNode), &Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_Statics::NewProp_bIncludeGenerationClass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeGenerationClass_MetaData), NewProp_bIncludeGenerationClass_MetaData) };
void Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_Statics::NewProp_bSinglePrecision_SetBit(void* Obj)
{
	((UK2Node_DynamicSetVariableByNameNode*)Obj)->bSinglePrecision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_Statics::NewProp_bSinglePrecision = { "bSinglePrecision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UK2Node_DynamicSetVariableByNameNode), &Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_Statics::NewProp_bSinglePrecision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSinglePrecision_MetaData), NewProp_bSinglePrecision_MetaData) };
void Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_Statics::NewProp_bExtendIfNotPresent_SetBit(void* Obj)
{
	((UK2Node_DynamicSetVariableByNameNode*)Obj)->bExtendIfNotPresent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_Statics::NewProp_bExtendIfNotPresent = { "bExtendIfNotPresent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UK2Node_DynamicSetVariableByNameNode), &Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_Statics::NewProp_bExtendIfNotPresent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExtendIfNotPresent_MetaData), NewProp_bExtendIfNotPresent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_Statics::NewProp_VariantPinType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_Statics::NewProp_bIncludeGenerationClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_Statics::NewProp_bSinglePrecision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_Statics::NewProp_bExtendIfNotPresent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node,
	(UObject* (*)())Z_Construct_UPackage__Script_AccessVariableByName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_Statics::ClassParams = {
	&UK2Node_DynamicSetVariableByNameNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode()
{
	if (!Z_Registration_Info_UClass_UK2Node_DynamicSetVariableByNameNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_DynamicSetVariableByNameNode.OuterSingleton, Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_DynamicSetVariableByNameNode.OuterSingleton;
}
template<> ACCESSVARIABLEBYNAME_API UClass* StaticClass<UK2Node_DynamicSetVariableByNameNode>()
{
	return UK2Node_DynamicSetVariableByNameNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_DynamicSetVariableByNameNode);
UK2Node_DynamicSetVariableByNameNode::~UK2Node_DynamicSetVariableByNameNode() {}
// End Class UK2Node_DynamicSetVariableByNameNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_AccessVariableByName_Public_K2Node_DynamicSetVariableByName_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_DynamicSetVariableByNameNode, UK2Node_DynamicSetVariableByNameNode::StaticClass, TEXT("UK2Node_DynamicSetVariableByNameNode"), &Z_Registration_Info_UClass_UK2Node_DynamicSetVariableByNameNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_DynamicSetVariableByNameNode), 827542024U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_AccessVariableByName_Public_K2Node_DynamicSetVariableByName_h_2520690141(TEXT("/Script/AccessVariableByName"),
	Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_AccessVariableByName_Public_K2Node_DynamicSetVariableByName_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_AccessVariableByName_Public_K2Node_DynamicSetVariableByName_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
