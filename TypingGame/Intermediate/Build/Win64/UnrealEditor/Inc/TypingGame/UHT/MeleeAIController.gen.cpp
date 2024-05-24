// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TypingGame/Public/MeleeAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
TYPINGGAME_API UClass* Z_Construct_UClass_AMeleeAIController();
TYPINGGAME_API UClass* Z_Construct_UClass_AMeleeAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_TypingGame();
// End Cross Module References

// Begin Class AMeleeAIController
void AMeleeAIController::StaticRegisterNativesAMeleeAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMeleeAIController);
UClass* Z_Construct_UClass_AMeleeAIController_NoRegister()
{
	return AMeleeAIController::StaticClass();
}
struct Z_Construct_UClass_AMeleeAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MeleeAIController.h" },
		{ "ModuleRelativePath", "Public/MeleeAIController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeleeAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMeleeAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_TypingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMeleeAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMeleeAIController_Statics::ClassParams = {
	&AMeleeAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMeleeAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMeleeAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMeleeAIController()
{
	if (!Z_Registration_Info_UClass_AMeleeAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMeleeAIController.OuterSingleton, Z_Construct_UClass_AMeleeAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMeleeAIController.OuterSingleton;
}
template<> TYPINGGAME_API UClass* StaticClass<AMeleeAIController>()
{
	return AMeleeAIController::StaticClass();
}
AMeleeAIController::AMeleeAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMeleeAIController);
AMeleeAIController::~AMeleeAIController() {}
// End Class AMeleeAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_TypingGame_Source_TypingGame_Public_MeleeAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMeleeAIController, AMeleeAIController::StaticClass, TEXT("AMeleeAIController"), &Z_Registration_Info_UClass_AMeleeAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMeleeAIController), 2884094484U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_TypingGame_Source_TypingGame_Public_MeleeAIController_h_2709451077(TEXT("/Script/TypingGame"),
	Z_CompiledInDeferFile_FID_Unreal_TypingGame_Source_TypingGame_Public_MeleeAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_TypingGame_Source_TypingGame_Public_MeleeAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
