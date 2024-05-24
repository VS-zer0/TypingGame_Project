// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TypingGame/BasicEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicEnemy() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TYPINGGAME_API UClass* Z_Construct_UClass_ABasicEnemy();
TYPINGGAME_API UClass* Z_Construct_UClass_ABasicEnemy_NoRegister();
UPackage* Z_Construct_UPackage__Script_TypingGame();
// End Cross Module References

// Begin Class ABasicEnemy
void ABasicEnemy::StaticRegisterNativesABasicEnemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABasicEnemy);
UClass* Z_Construct_UClass_ABasicEnemy_NoRegister()
{
	return ABasicEnemy::StaticClass();
}
struct Z_Construct_UClass_ABasicEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BasicEnemy.h" },
		{ "ModuleRelativePath", "BasicEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasicEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasicEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicEnemy_Statics::NewProp_CapsuleComp = { "CapsuleComp", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasicEnemy, CapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleComp_MetaData), NewProp_CapsuleComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicEnemy_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasicEnemy, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasicEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicEnemy_Statics::NewProp_CapsuleComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicEnemy_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasicEnemy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABasicEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_TypingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasicEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasicEnemy_Statics::ClassParams = {
	&ABasicEnemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABasicEnemy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABasicEnemy_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasicEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasicEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABasicEnemy()
{
	if (!Z_Registration_Info_UClass_ABasicEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasicEnemy.OuterSingleton, Z_Construct_UClass_ABasicEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABasicEnemy.OuterSingleton;
}
template<> TYPINGGAME_API UClass* StaticClass<ABasicEnemy>()
{
	return ABasicEnemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicEnemy);
ABasicEnemy::~ABasicEnemy() {}
// End Class ABasicEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_TypingGame_Source_TypingGame_BasicEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABasicEnemy, ABasicEnemy::StaticClass, TEXT("ABasicEnemy"), &Z_Registration_Info_UClass_ABasicEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasicEnemy), 4038093612U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_TypingGame_Source_TypingGame_BasicEnemy_h_2368000751(TEXT("/Script/TypingGame"),
	Z_CompiledInDeferFile_FID_Unreal_TypingGame_Source_TypingGame_BasicEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_TypingGame_Source_TypingGame_BasicEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
