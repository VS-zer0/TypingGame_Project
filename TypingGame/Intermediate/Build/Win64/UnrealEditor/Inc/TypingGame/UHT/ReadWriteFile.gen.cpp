// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TypingGame/Public/ReadWriteFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadWriteFile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
TYPINGGAME_API UClass* Z_Construct_UClass_UReadWriteFile();
TYPINGGAME_API UClass* Z_Construct_UClass_UReadWriteFile_NoRegister();
UPackage* Z_Construct_UPackage__Script_TypingGame();
// End Cross Module References

// Begin Class UReadWriteFile Function ReadStringFromFile
struct Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics
{
	struct ReadWriteFile_eventReadStringFromFile_Parms
	{
		FString FilePath;
		bool bOutSuccess;
		FString OutInfoMessage;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Read Write File" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Open a text file and read its content\n\x09* \n \x09* @param FilePath\x09\x09\x09The path to your file\n\x09* @param bOutSuccess\x09\x09If the action was a success or not\n\x09* @param OutInfoMessage \x09More information about the action's result\n\x09*\n\x09* @return The string content of your file\n \x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ReadWriteFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Open a text file and read its content\n\n@param FilePath                       The path to your file\n@param bOutSuccess            If the action was a success or not\n@param OutInfoMessage         More information about the action's result\n\n@return The string content of your file" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static void NewProp_bOutSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutInfoMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadWriteFile_eventReadStringFromFile_Parms, FilePath), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
{
	((ReadWriteFile_eventReadStringFromFile_Parms*)Obj)->bOutSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReadWriteFile_eventReadStringFromFile_Parms), &Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::NewProp_OutInfoMessage = { "OutInfoMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadWriteFile_eventReadStringFromFile_Parms, OutInfoMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadWriteFile_eventReadStringFromFile_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::NewProp_bOutSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::NewProp_OutInfoMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadWriteFile, nullptr, "ReadStringFromFile", nullptr, nullptr, Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::ReadWriteFile_eventReadStringFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::ReadWriteFile_eventReadStringFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReadWriteFile::execReadStringFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutInfoMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UReadWriteFile::ReadStringFromFile(Z_Param_FilePath,Z_Param_Out_bOutSuccess,Z_Param_Out_OutInfoMessage);
	P_NATIVE_END;
}
// End Class UReadWriteFile Function ReadStringFromFile

// Begin Class UReadWriteFile Function WriteStringToFile
struct Z_Construct_UFunction_UReadWriteFile_WriteStringToFile_Statics
{
	struct ReadWriteFile_eventWriteStringToFile_Parms
	{
		FString FilePath;
		FString String;
		bool bOutSuccess;
		FString OutInfoMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Read Write File" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Create a text file with your content\n\x09* \n \x09* @param FilePath\x09\x09\x09The path to your file\n\x09* @param String\x09\x09\x09\x09The string to write in the file\n\x09* @param bOutSuccess\x09\x09If the action was a success or not\n\x09* @param OutInfoMessage \x09More information about the action's result\n\x09*\n \x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ReadWriteFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a text file with your content\n\n@param FilePath                       The path to your file\n@param String                         The string to write in the file\n@param bOutSuccess            If the action was a success or not\n@param OutInfoMessage         More information about the action's result" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static void NewProp_bOutSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutInfoMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadWriteFile_WriteStringToFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadWriteFile_eventWriteStringToFile_Parms, FilePath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadWriteFile_WriteStringToFile_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadWriteFile_eventWriteStringToFile_Parms, String), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UReadWriteFile_WriteStringToFile_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
{
	((ReadWriteFile_eventWriteStringToFile_Parms*)Obj)->bOutSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReadWriteFile_WriteStringToFile_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReadWriteFile_eventWriteStringToFile_Parms), &Z_Construct_UFunction_UReadWriteFile_WriteStringToFile_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadWriteFile_WriteStringToFile_Statics::NewProp_OutInfoMessage = { "OutInfoMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadWriteFile_eventWriteStringToFile_Parms, OutInfoMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadWriteFile_WriteStringToFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriteFile_WriteStringToFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriteFile_WriteStringToFile_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriteFile_WriteStringToFile_Statics::NewProp_bOutSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriteFile_WriteStringToFile_Statics::NewProp_OutInfoMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadWriteFile_WriteStringToFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadWriteFile_WriteStringToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadWriteFile, nullptr, "WriteStringToFile", nullptr, nullptr, Z_Construct_UFunction_UReadWriteFile_WriteStringToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadWriteFile_WriteStringToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadWriteFile_WriteStringToFile_Statics::ReadWriteFile_eventWriteStringToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadWriteFile_WriteStringToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadWriteFile_WriteStringToFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReadWriteFile_WriteStringToFile_Statics::ReadWriteFile_eventWriteStringToFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadWriteFile_WriteStringToFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadWriteFile_WriteStringToFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReadWriteFile::execWriteStringToFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutInfoMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	UReadWriteFile::WriteStringToFile(Z_Param_FilePath,Z_Param_String,Z_Param_Out_bOutSuccess,Z_Param_Out_OutInfoMessage);
	P_NATIVE_END;
}
// End Class UReadWriteFile Function WriteStringToFile

// Begin Class UReadWriteFile
void UReadWriteFile::StaticRegisterNativesUReadWriteFile()
{
	UClass* Class = UReadWriteFile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ReadStringFromFile", &UReadWriteFile::execReadStringFromFile },
		{ "WriteStringToFile", &UReadWriteFile::execWriteStringToFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadWriteFile);
UClass* Z_Construct_UClass_UReadWriteFile_NoRegister()
{
	return UReadWriteFile::StaticClass();
}
struct Z_Construct_UClass_UReadWriteFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ReadWriteFile.h" },
		{ "ModuleRelativePath", "Public/ReadWriteFile.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile, "ReadStringFromFile" }, // 3468807491
		{ &Z_Construct_UFunction_UReadWriteFile_WriteStringToFile, "WriteStringToFile" }, // 3325977612
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadWriteFile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UReadWriteFile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_TypingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadWriteFile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadWriteFile_Statics::ClassParams = {
	&UReadWriteFile::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadWriteFile_Statics::Class_MetaDataParams), Z_Construct_UClass_UReadWriteFile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReadWriteFile()
{
	if (!Z_Registration_Info_UClass_UReadWriteFile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadWriteFile.OuterSingleton, Z_Construct_UClass_UReadWriteFile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReadWriteFile.OuterSingleton;
}
template<> TYPINGGAME_API UClass* StaticClass<UReadWriteFile>()
{
	return UReadWriteFile::StaticClass();
}
UReadWriteFile::UReadWriteFile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReadWriteFile);
UReadWriteFile::~UReadWriteFile() {}
// End Class UReadWriteFile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_TypingGame_Source_TypingGame_Public_ReadWriteFile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReadWriteFile, UReadWriteFile::StaticClass, TEXT("UReadWriteFile"), &Z_Registration_Info_UClass_UReadWriteFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadWriteFile), 3491479904U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_TypingGame_Source_TypingGame_Public_ReadWriteFile_h_334204614(TEXT("/Script/TypingGame"),
	Z_CompiledInDeferFile_FID_Unreal_TypingGame_Source_TypingGame_Public_ReadWriteFile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_TypingGame_Source_TypingGame_Public_ReadWriteFile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
