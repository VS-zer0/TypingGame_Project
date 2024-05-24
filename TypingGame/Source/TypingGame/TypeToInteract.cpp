// Fill out your copyright notice in the Description page of Project Settings.


#include "TypeToInteract.h"
#include "Containers/UnrealString.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UTypeToInteract::UTypeToInteract()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	bIsInteractable = false;
	InteractString = "Q";
	CharsDone = 0;
	bInteractDone = false;
	NumString = "0123456789 ";

	// Сопоставление цифр и пробела соответствующим названиям клавиш
	NumMap.Add(TEXT("0"), TEXT("Zero"));
	NumMap.Add(TEXT("1"), TEXT("One"));
	NumMap.Add(TEXT("2"), TEXT("Two"));
	NumMap.Add(TEXT("3"), TEXT("Three"));
	NumMap.Add(TEXT("4"), TEXT("Four"));
	NumMap.Add(TEXT("5"), TEXT("Five"));
	NumMap.Add(TEXT("6"), TEXT("Six"));
	NumMap.Add(TEXT("7"), TEXT("Seven"));
	NumMap.Add(TEXT("8"), TEXT("Eight"));
	NumMap.Add(TEXT("9"), TEXT("Nine"));
	NumMap.Add(TEXT(" "), TEXT("Spacebar"));
}
// 

// Called when the game starts
void UTypeToInteract::BeginPlay()
{
	Super::BeginPlay();

	// Получить контроллер игрока для считывания нажатий
	PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	// Подготовить строку и переменные
	StringSetup();
}


// Called every frame
void UTypeToInteract::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bIsInteractable && !bInteractDone && PlayerController->WasInputKeyJustPressed(FKey(EKeys::AnyKey))) // Нажата клавиша
	{
		if (PlayerController->WasInputKeyJustPressed(FKey(FName(*NextChar)))) // Нажата парвильная клавиша
		{
			CharsDone++;
			if (CharsDone >= InteractStringLength) // Если дошел до конца строки, то взаимодействие выполнено
			{
				bInteractDone = true;
			}
			else
			{
				NextChar = FString::Printf(TEXT("%c"), InteractString[CharsDone]); // Иначе новый следующий символ
				if (NumMap.Contains(NextChar))
				{
					NextChar = NumMap[NextChar];
				}
			}
		}
		else // Нажата неправильная клавиша
		{
			ResetInputProgress();
		}
	}
}

void UTypeToInteract::StringSetup()
{
	if (InteractString == "")
	{
		InteractString = "Error"; // Заполняет вместо пустой строки
	}
	InteractString = InteractString.ToUpper(); // Делает все символы завглавными
	InteractStringLength = InteractString.Len(); // Назначает длину строки
	NextChar = FString::Printf(TEXT("%c"), InteractString[0]); // Назначает первый символ строки как следующий для ввода
	if (NumMap.Contains(NextChar))
	{
		NextChar = NumMap[NextChar]; // Конвертация цифры или пробела в название клавиши
	}
}

void UTypeToInteract::ResetInputProgress()
{
	CharsDone = 0; // Сброс прогресса
	NextChar = FString::Printf(TEXT("%c"), InteractString[0]); // Повторно назначает первый символ как следующий
	if (NumMap.Contains(NextChar))
	{
		NextChar = NumMap[NextChar];
	}
	bInteractDone = false; // Отменяет состояние выполненности для повторного использования
}

