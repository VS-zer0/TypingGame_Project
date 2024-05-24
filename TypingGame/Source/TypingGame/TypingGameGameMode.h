// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TypingGameGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TYPINGGAME_API ATypingGameGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

// private:
// 	FString GameDir = FPaths::GameDir();

// 	void ReadWordsFromConfig(&OnesLeft, &OnesRight, &OnesAll, &Threes, &Fours);

// 	TArray<FString> OnesLeft;
// 	TArray<FString> OnesRight;
// 	TArray<FString> OnesAll;
// 	TArray<FString> Threes;
// 	TArray<FString> Fours;
};
