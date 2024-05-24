// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TypingGame/TypeToInteract.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypeToInteract() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TYPINGGAME_API UClass* Z_Construct_UClass_UTypeToInteract();
TYPINGGAME_API UClass* Z_Construct_UClass_UTypeToInteract_NoRegister();
UPackage* Z_Construct_UPackage__Script_TypingGame();
// End Cross Module References

// Begin Class UTypeToInteract Function ResetInputProgress
struct Z_Construct_UFunction_UTypeToInteract_ResetInputProgress_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Type To Interact" },
		{ "ModuleRelativePath", "TypeToInteract.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypeToInteract_ResetInputProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypeToInteract, nullptr, "ResetInputProgress", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypeToInteract_ResetInputProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypeToInteract_ResetInputProgress_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTypeToInteract_ResetInputProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypeToInteract_ResetInputProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTypeToInteract::execResetInputProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetInputProgress();
	P_NATIVE_END;
}
// End Class UTypeToInteract Function ResetInputProgress

// Begin Class UTypeToInteract Function StringSetup
struct Z_Construct_UFunction_UTypeToInteract_StringSetup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Type To Interact" },
		{ "ModuleRelativePath", "TypeToInteract.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypeToInteract_StringSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypeToInteract, nullptr, "StringSetup", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypeToInteract_StringSetup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypeToInteract_StringSetup_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTypeToInteract_StringSetup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypeToInteract_StringSetup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTypeToInteract::execStringSetup)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StringSetup();
	P_NATIVE_END;
}
// End Class UTypeToInteract Function StringSetup

// Begin Class UTypeToInteract
void UTypeToInteract::StaticRegisterNativesUTypeToInteract()
{
	UClass* Class = UTypeToInteract::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ResetInputProgress", &UTypeToInteract::execResetInputProgress },
		{ "StringSetup", &UTypeToInteract::execStringSetup },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypeToInteract);
UClass* Z_Construct_UClass_UTypeToInteract_NoRegister()
{
	return UTypeToInteract::StaticClass();
}
struct Z_Construct_UClass_UTypeToInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TypeToInteract.h" },
		{ "ModuleRelativePath", "TypeToInteract.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInteractable_MetaData[] = {
		{ "Category", "Typing" },
		{ "ModuleRelativePath", "TypeToInteract.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractString_MetaData[] = {
		{ "Category", "Typing" },
		{ "ModuleRelativePath", "TypeToInteract.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractStringLength_MetaData[] = {
		{ "Category", "Typing" },
		{ "ModuleRelativePath", "TypeToInteract.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharsDone_MetaData[] = {
		{ "Category", "Typing" },
		{ "ModuleRelativePath", "TypeToInteract.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInteractDone_MetaData[] = {
		{ "Category", "Typing" },
		{ "ModuleRelativePath", "TypeToInteract.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextChar_MetaData[] = {
		{ "Category", "Typing" },
		{ "ModuleRelativePath", "TypeToInteract.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsInteractable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInteractable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InteractString;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InteractStringLength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharsDone;
	static void NewProp_bInteractDone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInteractDone;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NextChar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTypeToInteract_ResetInputProgress, "ResetInputProgress" }, // 2194922107
		{ &Z_Construct_UFunction_UTypeToInteract_StringSetup, "StringSetup" }, // 1721866819
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypeToInteract>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UTypeToInteract_Statics::NewProp_bIsInteractable_SetBit(void* Obj)
{
	((UTypeToInteract*)Obj)->bIsInteractable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTypeToInteract_Statics::NewProp_bIsInteractable = { "bIsInteractable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTypeToInteract), &Z_Construct_UClass_UTypeToInteract_Statics::NewProp_bIsInteractable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInteractable_MetaData), NewProp_bIsInteractable_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTypeToInteract_Statics::NewProp_InteractString = { "InteractString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTypeToInteract, InteractString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractString_MetaData), NewProp_InteractString_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTypeToInteract_Statics::NewProp_InteractStringLength = { "InteractStringLength", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTypeToInteract, InteractStringLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractStringLength_MetaData), NewProp_InteractStringLength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTypeToInteract_Statics::NewProp_CharsDone = { "CharsDone", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTypeToInteract, CharsDone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharsDone_MetaData), NewProp_CharsDone_MetaData) };
void Z_Construct_UClass_UTypeToInteract_Statics::NewProp_bInteractDone_SetBit(void* Obj)
{
	((UTypeToInteract*)Obj)->bInteractDone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTypeToInteract_Statics::NewProp_bInteractDone = { "bInteractDone", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTypeToInteract), &Z_Construct_UClass_UTypeToInteract_Statics::NewProp_bInteractDone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInteractDone_MetaData), NewProp_bInteractDone_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTypeToInteract_Statics::NewProp_NextChar = { "NextChar", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTypeToInteract, NextChar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextChar_MetaData), NewProp_NextChar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTypeToInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypeToInteract_Statics::NewProp_bIsInteractable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypeToInteract_Statics::NewProp_InteractString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypeToInteract_Statics::NewProp_InteractStringLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypeToInteract_Statics::NewProp_CharsDone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypeToInteract_Statics::NewProp_bInteractDone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypeToInteract_Statics::NewProp_NextChar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypeToInteract_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTypeToInteract_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TypingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypeToInteract_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypeToInteract_Statics::ClassParams = {
	&UTypeToInteract::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTypeToInteract_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTypeToInteract_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypeToInteract_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypeToInteract_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTypeToInteract()
{
	if (!Z_Registration_Info_UClass_UTypeToInteract.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypeToInteract.OuterSingleton, Z_Construct_UClass_UTypeToInteract_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTypeToInteract.OuterSingleton;
}
template<> TYPINGGAME_API UClass* StaticClass<UTypeToInteract>()
{
	return UTypeToInteract::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTypeToInteract);
UTypeToInteract::~UTypeToInteract() {}
// End Class UTypeToInteract

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_TypingGame_Source_TypingGame_TypeToInteract_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTypeToInteract, UTypeToInteract::StaticClass, TEXT("UTypeToInteract"), &Z_Registration_Info_UClass_UTypeToInteract, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypeToInteract), 237074282U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_TypingGame_Source_TypingGame_TypeToInteract_h_3241880333(TEXT("/Script/TypingGame"),
	Z_CompiledInDeferFile_FID_Unreal_TypingGame_Source_TypingGame_TypeToInteract_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_TypingGame_Source_TypingGame_TypeToInteract_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
