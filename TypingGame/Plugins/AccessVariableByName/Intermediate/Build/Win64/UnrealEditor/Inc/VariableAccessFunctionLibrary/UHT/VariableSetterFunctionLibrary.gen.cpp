// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VariableAccessFunctionLibrary/Public/VariableSetterFunctionLibrary.h"
#include "VariableAccessFunctionLibrary/Public/VariableAccessFunctionLibraryUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVariableSetterFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UProperty();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_VariableAccessFunctionLibrary();
VARIABLEACCESSFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_UVariableSetterFunctionLibarary();
VARIABLEACCESSFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_UVariableSetterFunctionLibarary_NoRegister();
VARIABLEACCESSFUNCTIONLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAccessVariableParams();
// End Cross Module References

// Begin Class UVariableSetterFunctionLibarary Function SetNestedVariableByName
struct Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName_Statics
{
	struct VariableSetterFunctionLibarary_eventSetNestedVariableByName_Parms
	{
		UObject* Target;
		FName VarName;
		FAccessVariableParams Params;
		bool Success;
		UProperty* Result;
		UProperty* NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "CustomStructureParam", "Result,NewValue" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/VariableSetterFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VariableSetterFunctionLibarary_eventSetNestedVariableByName_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VariableSetterFunctionLibarary_eventSetNestedVariableByName_Parms, VarName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VariableSetterFunctionLibarary_eventSetNestedVariableByName_Parms, Params), Z_Construct_UScriptStruct_FAccessVariableParams, METADATA_PARAMS(0, nullptr) }; // 2325420235
void Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName_Statics::NewProp_Success_SetBit(void* Obj)
{
	((VariableSetterFunctionLibarary_eventSetNestedVariableByName_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VariableSetterFunctionLibarary_eventSetNestedVariableByName_Parms), &Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VariableSetterFunctionLibarary_eventSetNestedVariableByName_Parms, Result), Z_Construct_UClass_UProperty, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VariableSetterFunctionLibarary_eventSetNestedVariableByName_Parms, NewValue), Z_Construct_UClass_UProperty, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName_Statics::NewProp_Params,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariableSetterFunctionLibarary, nullptr, "SetNestedVariableByName", nullptr, nullptr, Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName_Statics::VariableSetterFunctionLibarary_eventSetNestedVariableByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName_Statics::VariableSetterFunctionLibarary_eventSetNestedVariableByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UVariableSetterFunctionLibarary Function SetNestedVariableByName

// Begin Class UVariableSetterFunctionLibarary
void UVariableSetterFunctionLibarary::StaticRegisterNativesUVariableSetterFunctionLibarary()
{
	UClass* Class = UVariableSetterFunctionLibarary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetNestedVariableByName", &UVariableSetterFunctionLibarary::execSetNestedVariableByName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVariableSetterFunctionLibarary);
UClass* Z_Construct_UClass_UVariableSetterFunctionLibarary_NoRegister()
{
	return UVariableSetterFunctionLibarary::StaticClass();
}
struct Z_Construct_UClass_UVariableSetterFunctionLibarary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VariableSetterFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/VariableSetterFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVariableSetterFunctionLibarary_SetNestedVariableByName, "SetNestedVariableByName" }, // 796828968
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVariableSetterFunctionLibarary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVariableSetterFunctionLibarary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_VariableAccessFunctionLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVariableSetterFunctionLibarary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVariableSetterFunctionLibarary_Statics::ClassParams = {
	&UVariableSetterFunctionLibarary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVariableSetterFunctionLibarary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVariableSetterFunctionLibarary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVariableSetterFunctionLibarary()
{
	if (!Z_Registration_Info_UClass_UVariableSetterFunctionLibarary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVariableSetterFunctionLibarary.OuterSingleton, Z_Construct_UClass_UVariableSetterFunctionLibarary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVariableSetterFunctionLibarary.OuterSingleton;
}
template<> VARIABLEACCESSFUNCTIONLIBRARY_API UClass* StaticClass<UVariableSetterFunctionLibarary>()
{
	return UVariableSetterFunctionLibarary::StaticClass();
}
UVariableSetterFunctionLibarary::UVariableSetterFunctionLibarary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVariableSetterFunctionLibarary);
UVariableSetterFunctionLibarary::~UVariableSetterFunctionLibarary() {}
// End Class UVariableSetterFunctionLibarary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_VariableAccessFunctionLibrary_Public_VariableSetterFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVariableSetterFunctionLibarary, UVariableSetterFunctionLibarary::StaticClass, TEXT("UVariableSetterFunctionLibarary"), &Z_Registration_Info_UClass_UVariableSetterFunctionLibarary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVariableSetterFunctionLibarary), 831003421U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_VariableAccessFunctionLibrary_Public_VariableSetterFunctionLibrary_h_3237945063(TEXT("/Script/VariableAccessFunctionLibrary"),
	Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_VariableAccessFunctionLibrary_Public_VariableSetterFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_TypingGame_Plugins_AccessVariableByName_Source_VariableAccessFunctionLibrary_Public_VariableSetterFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
