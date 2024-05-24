// Fill out your copyright notice in the Description page of Project Settings.


#include "MeleeAIController.h"
#include "Kismet/GameplayStatics.h"

void AMeleeAIController::BeginPlay()
{
    Super::BeginPlay();

    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    SetFocus(PlayerPawn);

    MoveToActor(PlayerPawn, 200);
}