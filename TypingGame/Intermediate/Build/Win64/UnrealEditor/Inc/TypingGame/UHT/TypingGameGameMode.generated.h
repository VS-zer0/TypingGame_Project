// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TypingGameGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TYPINGGAME_TypingGameGameMode_generated_h
#error "TypingGameGameMode.generated.h already included, missing '#pragma once' in TypingGameGameMode.h"
#endif
#define TYPINGGAME_TypingGameGameMode_generated_h

#define FID_Unreal_TypingGame_Source_TypingGame_TypingGameGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATypingGameGameMode(); \
	friend struct Z_Construct_UClass_ATypingGameGameMode_Statics; \
public: \
	DECLARE_CLASS(ATypingGameGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TypingGame"), NO_API) \
	DECLARE_SERIALIZER(ATypingGameGameMode)


#define FID_Unreal_TypingGame_Source_TypingGame_TypingGameGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATypingGameGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATypingGameGameMode(ATypingGameGameMode&&); \
	ATypingGameGameMode(const ATypingGameGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATypingGameGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATypingGameGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATypingGameGameMode) \
	NO_API virtual ~ATypingGameGameMode();


#define FID_Unreal_TypingGame_Source_TypingGame_TypingGameGameMode_h_12_PROLOG
#define FID_Unreal_TypingGame_Source_TypingGame_TypingGameGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_TypingGame_Source_TypingGame_TypingGameGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_TypingGame_Source_TypingGame_TypingGameGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TYPINGGAME_API UClass* StaticClass<class ATypingGameGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_TypingGame_Source_TypingGame_TypingGameGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
