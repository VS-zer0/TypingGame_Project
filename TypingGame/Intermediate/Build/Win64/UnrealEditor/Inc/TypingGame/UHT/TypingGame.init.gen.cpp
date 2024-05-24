// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypingGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TypingGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TypingGame()
	{
		if (!Z_Registration_Info_UPackage__Script_TypingGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TypingGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x59D000EC,
				0x39A10867,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TypingGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TypingGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TypingGame(Z_Construct_UPackage__Script_TypingGame, TEXT("/Script/TypingGame"), Z_Registration_Info_UPackage__Script_TypingGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x59D000EC, 0x39A10867));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
