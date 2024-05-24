// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeleeAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TYPINGGAME_MeleeAIController_generated_h
#error "MeleeAIController.generated.h already included, missing '#pragma once' in MeleeAIController.h"
#endif
#define TYPINGGAME_MeleeAIController_generated_h

#define FID_Unreal_TypingGame_Source_TypingGame_Public_MeleeAIController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMeleeAIController(); \
	friend struct Z_Construct_UClass_AMeleeAIController_Statics; \
public: \
	DECLARE_CLASS(AMeleeAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TypingGame"), NO_API) \
	DECLARE_SERIALIZER(AMeleeAIController)


#define FID_Unreal_TypingGame_Source_TypingGame_Public_MeleeAIController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMeleeAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMeleeAIController(AMeleeAIController&&); \
	AMeleeAIController(const AMeleeAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMeleeAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMeleeAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMeleeAIController) \
	NO_API virtual ~AMeleeAIController();


#define FID_Unreal_TypingGame_Source_TypingGame_Public_MeleeAIController_h_12_PROLOG
#define FID_Unreal_TypingGame_Source_TypingGame_Public_MeleeAIController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_TypingGame_Source_TypingGame_Public_MeleeAIController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_TypingGame_Source_TypingGame_Public_MeleeAIController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TYPINGGAME_API UClass* StaticClass<class AMeleeAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_TypingGame_Source_TypingGame_Public_MeleeAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
