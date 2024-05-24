// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReadWriteFile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TYPINGGAME_ReadWriteFile_generated_h
#error "ReadWriteFile.generated.h already included, missing '#pragma once' in ReadWriteFile.h"
#endif
#define TYPINGGAME_ReadWriteFile_generated_h

#define FID_Unreal_TypingGame_Source_TypingGame_Public_ReadWriteFile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWriteStringToFile); \
	DECLARE_FUNCTION(execReadStringFromFile);


#define FID_Unreal_TypingGame_Source_TypingGame_Public_ReadWriteFile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReadWriteFile(); \
	friend struct Z_Construct_UClass_UReadWriteFile_Statics; \
public: \
	DECLARE_CLASS(UReadWriteFile, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TypingGame"), NO_API) \
	DECLARE_SERIALIZER(UReadWriteFile)


#define FID_Unreal_TypingGame_Source_TypingGame_Public_ReadWriteFile_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReadWriteFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UReadWriteFile(UReadWriteFile&&); \
	UReadWriteFile(const UReadWriteFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReadWriteFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReadWriteFile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReadWriteFile) \
	NO_API virtual ~UReadWriteFile();


#define FID_Unreal_TypingGame_Source_TypingGame_Public_ReadWriteFile_h_12_PROLOG
#define FID_Unreal_TypingGame_Source_TypingGame_Public_ReadWriteFile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_TypingGame_Source_TypingGame_Public_ReadWriteFile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_TypingGame_Source_TypingGame_Public_ReadWriteFile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_TypingGame_Source_TypingGame_Public_ReadWriteFile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TYPINGGAME_API UClass* StaticClass<class UReadWriteFile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_TypingGame_Source_TypingGame_Public_ReadWriteFile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
