// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TypeToInteract.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TYPINGGAME_API UTypeToInteract : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTypeToInteract();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Typing")
	bool bIsInteractable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Typing")
	FString InteractString;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Typing")
	int InteractStringLength;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Typing")
	int CharsDone;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Typing")
	bool bInteractDone;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Typing")
	FString NextChar;

	UFUNCTION(BlueprintCallable, Category = "Type To Interact")
	void StringSetup();

	UFUNCTION(BlueprintCallable, Category = "Type To Interact")
	void ResetInputProgress();

private:

	class APlayerController* PlayerController;

	FString NumString;
	TMap<FString, FString> NumMap; 

};
