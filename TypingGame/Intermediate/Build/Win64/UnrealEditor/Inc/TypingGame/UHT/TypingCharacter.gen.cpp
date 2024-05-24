// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TypingGame/TypingCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypingCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
TYPINGGAME_API UClass* Z_Construct_UClass_ATypingCharacter();
TYPINGGAME_API UClass* Z_Construct_UClass_ATypingCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_TypingGame();
// End Cross Module References

// Begin Class ATypingCharacter
void ATypingCharacter::StaticRegisterNativesATypingCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATypingCharacter);
UClass* Z_Construct_UClass_ATypingCharacter_NoRegister()
{
	return ATypingCharacter::StaticClass();
}
struct Z_Construct_UClass_ATypingCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TypingCharacter.h" },
		{ "ModuleRelativePath", "TypingCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATypingCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATypingCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TypingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATypingCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATypingCharacter_Statics::ClassParams = {
	&ATypingCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATypingCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATypingCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATypingCharacter()
{
	if (!Z_Registration_Info_UClass_ATypingCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATypingCharacter.OuterSingleton, Z_Construct_UClass_ATypingCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATypingCharacter.OuterSingleton;
}
template<> TYPINGGAME_API UClass* StaticClass<ATypingCharacter>()
{
	return ATypingCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATypingCharacter);
ATypingCharacter::~ATypingCharacter() {}
// End Class ATypingCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_TypingGame_Source_TypingGame_TypingCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATypingCharacter, ATypingCharacter::StaticClass, TEXT("ATypingCharacter"), &Z_Registration_Info_UClass_ATypingCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATypingCharacter), 3344033472U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_TypingGame_Source_TypingGame_TypingCharacter_h_1320319116(TEXT("/Script/TypingGame"),
	Z_CompiledInDeferFile_FID_Unreal_TypingGame_Source_TypingGame_TypingCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_TypingGame_Source_TypingGame_TypingCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
