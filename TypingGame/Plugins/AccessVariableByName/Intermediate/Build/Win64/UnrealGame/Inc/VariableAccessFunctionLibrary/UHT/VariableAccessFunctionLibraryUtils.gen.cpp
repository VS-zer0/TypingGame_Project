// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VariableAccessFunctionLibrary/Public/VariableAccessFunctionLibraryUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVariableAccessFunctionLibraryUtils() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_VariableAccessFunctionLibrary();
VARIABLEACCESSFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_UVariableAccessUtilLibrary();
VARIABLEACCESSFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_UVariableAccessUtilLibrary_NoRegister();
VARIABLEACCESSFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAccessVariableParams();
// End Cross Module References

// Begin ScriptStruct FAccessVariableParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccessVariableParams;
class UScriptStruct* FAccessVariableParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccessVariableParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccessVariableParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccessVariableParams, (UObject*)Z_Construct_UPackage__Script_VariableAccessFunctionLibrary(), TEXT("AccessVariableParams"));
	}
	return Z_Registration_Info_UScriptStruct_AccessVariableParams.OuterSingleton;
}
template<> VARIABLEACCESSFUNCTIONLIBRARY_API UScriptStruct* StaticStruct<FAccessVariableParams>()
{
	return FAccessVariableParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAccessVariableParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VariableAccessFunctionLibraryUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeGenerationClass_MetaData[] = {
		{ "Category", "Access Variable Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Include variables from a generation class (UBlueprint) if true.\n" },
#endif
		{ "ModuleRelativePath", "Public/VariableAccessFunctionLibraryUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Include variables from a generation class (UBlueprint) if true." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExtendIfNotPresent_MetaData[] = {
		{ "Category", "Container Type Access Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Create elements automatically if true when the element does not present.\n" },
#endif
		{ "ModuleRelativePath", "Public/VariableAccessFunctionLibraryUtils.h" },
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
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccessVariableParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FAccessVariableParams_Statics::NewProp_bIncludeGenerationClass_SetBit(void* Obj)
{
	((FAccessVariableParams*)Obj)->bIncludeGenerationClass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccessVariableParams_Statics::NewProp_bIncludeGenerationClass = { "bIncludeGenerationClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAccessVariableParams), &Z_Construct_UScriptStruct_FAccessVariableParams_Statics::NewProp_bIncludeGenerationClass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeGenerationClass_MetaData), NewProp_bIncludeGenerationClass_MetaData) };
void Z_Construct_UScriptStruct_FAccessVariableParams_Statics::NewProp_bExtendIfNotPresent_SetBit(void* Obj)
{
	((FAccessVariableParams*)Obj)->bExtendIfNotPresent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccessVariableParams_Statics::NewProp_bExtendIfNotPresent = { "bExtendIfNotPresent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAccessVariableParams), &Z_Construct_UScriptStruct_FAccessVariableParams_Statics::NewProp_bExtendIfNotPresent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExtendIfNotPresent_MetaData), NewProp_bExtendIfNotPresent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccessVariableParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccessVariableParams_Statics::NewProp_bIncludeGenerationClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccessVariableParams_Statics::NewProp_bExtendIfNotPresent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccessVariableParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccessVariableParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VariableAccessFunctionLibrary,
	nullptr,
	&NewStructOps,
	"AccessVariableParams",
	Z_Construct_UScriptStruct_FAccessVariableParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccessVariableParams_Statics::PropPointers),
	sizeof(FAccessVariableParams),
	alignof(FAccessVariableParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccessVariableParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAccessVariableParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAccessVariableParams()
{
	if (!Z_Registration_Info_UScriptStruct_AccessVariableParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccessVariableParams.InnerSingleton, Z_Construct_UScriptStruct_FAccessVariableParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AccessVariableParams.InnerSingleton;
}
// End ScriptStruct FAccessVariableParams

// Begin Class UVariableAccessUtilLibrary Function MakeAccessVariableParams
struct Z_Construct_UFunction_UVariableAccessUtilLibrary_MakeAccessVariableParams_Statics
{
	struct VariableAccessUtilLibrary_eventMakeAccessVariableParams_Parms
	{
		bool bIncludeGenerationClass;
		bool bExtendIfNotPresent;
		FAccessVariableParams ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VariableAccessFunctionLibraryUtils.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIncludeGenerationClass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeGenerationClass;
	static void NewProp_bExtendIfNotPresent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtendIfNotPresent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVariableAccessUtilLibrary_MakeAccessVariableParams_Statics::NewProp_bIncludeGenerationClass_SetBit(void* Obj)
{
	((VariableAccessUtilLibrary_eventMakeAccessVariableParams_Parms*)Obj)->bIncludeGenerationClass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVariableAccessUtilLibrary_MakeAccessVariableParams_Statics::NewProp_bIncludeGenerationClass = { "bIncludeGenerationClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VariableAccessUtilLibrary_eventMakeAccessVariableParams_Parms), &Z_Construct_UFunction_UVariableAccessUtilLibrary_MakeAccessVariableParams_Statics::NewProp_bIncludeGenerationClass_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVariableAccessUtilLibrary_MakeAccessVariableParams_Statics::NewProp_bExtendIfNotPresent_SetBit(void* Obj)
{
	((VariableAccessUtilLibrary_eventMakeAccessVariableParams_Parms*)Obj)->bExtendIfNotPresent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVariableAccessUtilLibrary_MakeAccessVariableParams_Statics::NewProp_bExtendIfNotPresent = { "bExtendIfNotPresent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VariableAccessUtilLibrary_eventMakeAccessVariableParams_Parms), &Z_Construct_UFunction_UVariableAccessUtilLibrary_MakeAccessVariableParams_Statics::NewProp_bExtendIfNotPresent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariableAccessUtilLibrary_MakeAccessVariableParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VariableAccessUtilLibrary_eventMakeAccessVariableParams_Parms, ReturnValue), Z_Construct_UScriptStruct_FAccessVariableParams, METADATA_PARAMS(0, nullptr) }; // 2325420235
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariableAccessUtilLibrary_MakeAccessVariableParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariableAccessUtilLibrary_MakeAccessVariableParams_Statics::NewProp_bIncludeGenerationClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariableAccessUtilLibrary_MakeAccessVariableParams_Statics::NewProp_bExtendIfNotPresent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariableAccessUtilLibrary_MakeAccessVariableParams_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariableAccessUtilLibrary_MakeAccessVariableParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariableAccessUtilLibrary_MakeAccessVariableParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariableAccessUtilLibrary, nullptr, "MakeAccessVariableParams", nullptr, nullptr, Z_Construct_UFunction_UVariableAccessUtilLibrary_MakeAccessVariableParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariableAccessUtilLibrary_MakeAccessVariableParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVariableAccessUtilLibrary_MakeAccessVariableParams_Statics::VariableAccessUtilLibrary_eventMakeAccessVariableParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariableAccessUtilLibrary_MakeAccessVariableParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVariableAccessUtilLibrary_MakeAccessVariableParams_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVariableAccessUtilLibrary_MakeAccessVariableParams_Statics::VariableAccessUtilLibrary_eventMakeAccessVariableParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVariableAccessUtilLibrary_MakeAccessVariableParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariableAccessUtilLibrary_MakeAccessVariableParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVariableAccessUtilLibrary::execMakeAccessVariableParams)
{
	P_GET_UBOOL(Z_Param_bIncludeGenerationClass);
	P_GET_UBOOL(Z_Param_bExtendIfNotPresent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAccessVariableParams*)Z_Param__Result=UVariableAccessUtilLibrary::MakeAccessVariableParams(Z_Param_bIncludeGenerationClass,Z_Param_bExtendIfNotPresent);
	P_NATIVE_END;
}
// End Class UVariableAccessUtilLibrary Function MakeAccessVariableParams

// Begin Class UVariableAccessUtilLibrary
void UVariableAccessUtilLibrary::StaticRegisterNativesUVariableAccessUtilLibrary()
{
	UClass* Class = UVariableAccessUtilLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MakeAccessVariableParams", &UVariableAccessUtilLibrary::execMakeAccessVariableParams },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVariableAccessUtilLibrary);
UClass* Z_Construct_UClass_UVariableAccessUtilLibrary_NoRegister()
{
	return UVariableAccessUtilLibrary::StaticClass();
}
struct Z_Construct_UClass_UVariableAccessUtilLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VariableAccessFunctionLibraryUtils.h" },
		{ "ModuleRelativePath", "Public/VariableAccessFunctionLibraryUtils.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVariableAccessUtilLibrary_MakeAccessVariableParams, "MakeAccessVariableParams" }, // 1590238730
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVariableAccessUtilLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVariableAccessUtilLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_VariableAccessFunctionLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVariableAccessUtilLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVariableAccessUtilLibrary_Statics::ClassParams = {
	&UVariableAccessUtilLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVariableAccessUtilLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVariableAccessUtilLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVariableAccessUtilLibrary()
{
	if (!Z_Registration_Info_UClass_UVariableAccessUtilLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVariableAccessUtilLibrary.OuterSingleton, Z_Construct_UClass_UVariableAccessUtilLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVariableAccessUtilLibrary.OuterSingleton;
}
template<> VARIABLEACCESSFUNCTIONLIBRARY_API UClass* StaticClass<UVariableAccessUtilLibrary>()
{
	return UVariableAccessUtilLibrary::StaticClass();
}
UVariableAccessUtilLibrary::UVariableAccessUtilLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVariableAccessUtilLibrary);
UVariableAccessUtilLibrary::~UVariableAccessUtilLibrary() {}
// End Class UVariableAccessUtilLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_VariableAccessFunctionLibrary_Public_VariableAccessFunctionLibraryUtils_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAccessVariableParams::StaticStruct, Z_Construct_UScriptStruct_FAccessVariableParams_Statics::NewStructOps, TEXT("AccessVariableParams"), &Z_Registration_Info_UScriptStruct_AccessVariableParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccessVariableParams), 2325420235U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVariableAccessUtilLibrary, UVariableAccessUtilLibrary::StaticClass, TEXT("UVariableAccessUtilLibrary"), &Z_Registration_Info_UClass_UVariableAccessUtilLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVariableAccessUtilLibrary), 1405628463U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_VariableAccessFunctionLibrary_Public_VariableAccessFunctionLibraryUtils_h_309620703(TEXT("/Script/VariableAccessFunctionLibrary"),
	Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_VariableAccessFunctionLibrary_Public_VariableAccessFunctionLibraryUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_VariableAccessFunctionLibrary_Public_VariableAccessFunctionLibraryUtils_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_VariableAccessFunctionLibrary_Public_VariableAccessFunctionLibraryUtils_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_VariableAccessFunctionLibrary_Public_VariableAccessFunctionLibraryUtils_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
