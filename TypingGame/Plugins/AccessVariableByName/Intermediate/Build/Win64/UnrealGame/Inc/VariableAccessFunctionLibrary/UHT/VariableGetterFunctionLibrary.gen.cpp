// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VariableAccessFunctionLibrary/Public/VariableGetterFunctionLibrary.h"
#include "VariableAccessFunctionLibrary/Public/VariableAccessFunctionLibraryUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVariableGetterFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UProperty();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_VariableAccessFunctionLibrary();
VARIABLEACCESSFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_UVariableGetterFunctionLibarary();
VARIABLEACCESSFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_UVariableGetterFunctionLibarary_NoRegister();
VARIABLEACCESSFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAccessVariableParams();
// End Cross Module References

// Begin Class UVariableGetterFunctionLibarary Function GetNestedVariableByName
struct Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByName_Statics
{
	struct VariableGetterFunctionLibarary_eventGetNestedVariableByName_Parms
	{
		UObject* Target;
		FName VarName;
		FAccessVariableParams Params;
		bool Success;
		UProperty* Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "CustomStructureParam", "Result" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/VariableGetterFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VariableGetterFunctionLibarary_eventGetNestedVariableByName_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VariableGetterFunctionLibarary_eventGetNestedVariableByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByName_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VariableGetterFunctionLibarary_eventGetNestedVariableByName_Parms, Params), Z_Construct_UScriptStruct_FAccessVariableParams, METADATA_PARAMS(0, nullptr) }; // 2325420235
void Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByName_Statics::NewProp_Success_SetBit(void* Obj)
{
	((VariableGetterFunctionLibarary_eventGetNestedVariableByName_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByName_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VariableGetterFunctionLibarary_eventGetNestedVariableByName_Parms), &Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByName_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByName_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VariableGetterFunctionLibarary_eventGetNestedVariableByName_Parms, Result), Z_Construct_UClass_UProperty, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByName_Statics::NewProp_Params,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByName_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByName_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariableGetterFunctionLibarary, nullptr, "GetNestedVariableByName", nullptr, nullptr, Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByName_Statics::VariableGetterFunctionLibarary_eventGetNestedVariableByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByName_Statics::VariableGetterFunctionLibarary_eventGetNestedVariableByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UVariableGetterFunctionLibarary Function GetNestedVariableByName

// Begin Class UVariableGetterFunctionLibarary Function GetNestedVariableByNamePure
struct Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByNamePure_Statics
{
	struct VariableGetterFunctionLibarary_eventGetNestedVariableByNamePure_Parms
	{
		UObject* Target;
		FName VarName;
		FAccessVariableParams Params;
		bool Success;
		UProperty* Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "CustomStructureParam", "Result" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/VariableGetterFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByNamePure_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VariableGetterFunctionLibarary_eventGetNestedVariableByNamePure_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByNamePure_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VariableGetterFunctionLibarary_eventGetNestedVariableByNamePure_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByNamePure_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VariableGetterFunctionLibarary_eventGetNestedVariableByNamePure_Parms, Params), Z_Construct_UScriptStruct_FAccessVariableParams, METADATA_PARAMS(0, nullptr) }; // 2325420235
void Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByNamePure_Statics::NewProp_Success_SetBit(void* Obj)
{
	((VariableGetterFunctionLibarary_eventGetNestedVariableByNamePure_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByNamePure_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VariableGetterFunctionLibarary_eventGetNestedVariableByNamePure_Parms), &Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByNamePure_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByNamePure_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VariableGetterFunctionLibarary_eventGetNestedVariableByNamePure_Parms, Result), Z_Construct_UClass_UProperty, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByNamePure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByNamePure_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByNamePure_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByNamePure_Statics::NewProp_Params,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByNamePure_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByNamePure_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByNamePure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByNamePure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariableGetterFunctionLibarary, nullptr, "GetNestedVariableByNamePure", nullptr, nullptr, Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByNamePure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByNamePure_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByNamePure_Statics::VariableGetterFunctionLibarary_eventGetNestedVariableByNamePure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByNamePure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByNamePure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByNamePure_Statics::VariableGetterFunctionLibarary_eventGetNestedVariableByNamePure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByNamePure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByNamePure_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UVariableGetterFunctionLibarary Function GetNestedVariableByNamePure

// Begin Class UVariableGetterFunctionLibarary
void UVariableGetterFunctionLibarary::StaticRegisterNativesUVariableGetterFunctionLibarary()
{
	UClass* Class = UVariableGetterFunctionLibarary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetNestedVariableByName", &UVariableGetterFunctionLibarary::execGetNestedVariableByName },
		{ "GetNestedVariableByNamePure", &UVariableGetterFunctionLibarary::execGetNestedVariableByNamePure },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVariableGetterFunctionLibarary);
UClass* Z_Construct_UClass_UVariableGetterFunctionLibarary_NoRegister()
{
	return UVariableGetterFunctionLibarary::StaticClass();
}
struct Z_Construct_UClass_UVariableGetterFunctionLibarary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VariableGetterFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/VariableGetterFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByName, "GetNestedVariableByName" }, // 1203635630
		{ &Z_Construct_UFunction_UVariableGetterFunctionLibarary_GetNestedVariableByNamePure, "GetNestedVariableByNamePure" }, // 3086109933
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVariableGetterFunctionLibarary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVariableGetterFunctionLibarary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_VariableAccessFunctionLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVariableGetterFunctionLibarary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVariableGetterFunctionLibarary_Statics::ClassParams = {
	&UVariableGetterFunctionLibarary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVariableGetterFunctionLibarary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVariableGetterFunctionLibarary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVariableGetterFunctionLibarary()
{
	if (!Z_Registration_Info_UClass_UVariableGetterFunctionLibarary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVariableGetterFunctionLibarary.OuterSingleton, Z_Construct_UClass_UVariableGetterFunctionLibarary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVariableGetterFunctionLibarary.OuterSingleton;
}
template<> VARIABLEACCESSFUNCTIONLIBRARY_API UClass* StaticClass<UVariableGetterFunctionLibarary>()
{
	return UVariableGetterFunctionLibarary::StaticClass();
}
UVariableGetterFunctionLibarary::UVariableGetterFunctionLibarary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVariableGetterFunctionLibarary);
UVariableGetterFunctionLibarary::~UVariableGetterFunctionLibarary() {}
// End Class UVariableGetterFunctionLibarary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_VariableAccessFunctionLibrary_Public_VariableGetterFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVariableGetterFunctionLibarary, UVariableGetterFunctionLibarary::StaticClass, TEXT("UVariableGetterFunctionLibarary"), &Z_Registration_Info_UClass_UVariableGetterFunctionLibarary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVariableGetterFunctionLibarary), 355974248U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_VariableAccessFunctionLibrary_Public_VariableGetterFunctionLibrary_h_450409324(TEXT("/Script/VariableAccessFunctionLibrary"),
	Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_VariableAccessFunctionLibrary_Public_VariableGetterFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_VariableAccessFunctionLibrary_Public_VariableGetterFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
