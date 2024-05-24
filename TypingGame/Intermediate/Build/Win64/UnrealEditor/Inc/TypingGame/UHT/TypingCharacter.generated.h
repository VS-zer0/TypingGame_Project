// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TypingCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TYPINGGAME_TypingCharacter_generated_h
#error "TypingCharacter.generated.h already included, missing '#pragma once' in TypingCharacter.h"
#endif
#define TYPINGGAME_TypingCharacter_generated_h

#define FID_Unreal_TypingGame_Source_TypingGame_TypingCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATypingCharacter(); \
	friend struct Z_Construct_UClass_ATypingCharacter_Statics; \
public: \
	DECLARE_CLASS(ATypingCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TypingGame"), NO_API) \
	DECLARE_SERIALIZER(ATypingCharacter)


#define FID_Unreal_TypingGame_Source_TypingGame_TypingCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATypingCharacter(ATypingCharacter&&); \
	ATypingCharacter(const ATypingCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATypingCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATypingCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATypingCharacter) \
	NO_API virtual ~ATypingCharacter();


#define FID_Unreal_TypingGame_Source_TypingGame_TypingCharacter_h_9_PROLOG
#define FID_Unreal_TypingGame_Source_TypingGame_TypingCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_TypingGame_Source_TypingGame_TypingCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_TypingGame_Source_TypingGame_TypingCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TYPINGGAME_API UClass* StaticClass<class ATypingCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_TypingGame_Source_TypingGame_TypingCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
