// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TypingGame/TypingGameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypingGameGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TYPINGGAME_API UClass* Z_Construct_UClass_ATypingGameGameMode();
TYPINGGAME_API UClass* Z_Construct_UClass_ATypingGameGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TypingGame();
// End Cross Module References

// Begin Class ATypingGameGameMode
void ATypingGameGameMode::StaticRegisterNativesATypingGameGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATypingGameGameMode);
UClass* Z_Construct_UClass_ATypingGameGameMode_NoRegister()
{
	return ATypingGameGameMode::StaticClass();
}
struct Z_Construct_UClass_ATypingGameGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TypingGameGameMode.h" },
		{ "ModuleRelativePath", "TypingGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATypingGameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATypingGameGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TypingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATypingGameGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATypingGameGameMode_Statics::ClassParams = {
	&ATypingGameGameMode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATypingGameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATypingGameGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATypingGameGameMode()
{
	if (!Z_Registration_Info_UClass_ATypingGameGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATypingGameGameMode.OuterSingleton, Z_Construct_UClass_ATypingGameGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATypingGameGameMode.OuterSingleton;
}
template<> TYPINGGAME_API UClass* StaticClass<ATypingGameGameMode>()
{
	return ATypingGameGameMode::StaticClass();
}
ATypingGameGameMode::ATypingGameGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATypingGameGameMode);
ATypingGameGameMode::~ATypingGameGameMode() {}
// End Class ATypingGameGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_TypingGame_Source_TypingGame_TypingGameGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATypingGameGameMode, ATypingGameGameMode::StaticClass, TEXT("ATypingGameGameMode"), &Z_Registration_Info_UClass_ATypingGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATypingGameGameMode), 3315548390U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_TypingGame_Source_TypingGame_TypingGameGameMode_h_4074453498(TEXT("/Script/TypingGame"),
	Z_CompiledInDeferFile_FID_Unreal_TypingGame_Source_TypingGame_TypingGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_TypingGame_Source_TypingGame_TypingGameGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
