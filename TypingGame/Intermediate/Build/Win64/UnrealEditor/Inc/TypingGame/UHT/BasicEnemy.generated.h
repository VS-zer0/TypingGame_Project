// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BasicEnemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TYPINGGAME_BasicEnemy_generated_h
#error "BasicEnemy.generated.h already included, missing '#pragma once' in BasicEnemy.h"
#endif
#define TYPINGGAME_BasicEnemy_generated_h

#define FID_Unreal_TypingGame_Source_TypingGame_BasicEnemy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasicEnemy(); \
	friend struct Z_Construct_UClass_ABasicEnemy_Statics; \
public: \
	DECLARE_CLASS(ABasicEnemy, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TypingGame"), NO_API) \
	DECLARE_SERIALIZER(ABasicEnemy)


#define FID_Unreal_TypingGame_Source_TypingGame_BasicEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABasicEnemy(ABasicEnemy&&); \
	ABasicEnemy(const ABasicEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasicEnemy) \
	NO_API virtual ~ABasicEnemy();


#define FID_Unreal_TypingGame_Source_TypingGame_BasicEnemy_h_9_PROLOG
#define FID_Unreal_TypingGame_Source_TypingGame_BasicEnemy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_TypingGame_Source_TypingGame_BasicEnemy_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_TypingGame_Source_TypingGame_BasicEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TYPINGGAME_API UClass* StaticClass<class ABasicEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_TypingGame_Source_TypingGame_BasicEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
