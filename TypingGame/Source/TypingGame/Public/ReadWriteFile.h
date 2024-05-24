// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ReadWriteFile.generated.h"

/**
 * 
 */
UCLASS()
class TYPINGGAME_API UReadWriteFile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	/**
	* Open a text file and read its content
	* 
 	* @param FilePath			The path to your file
	* @param bOutSuccess		If the action was a success or not
	* @param OutInfoMessage 	More information about the action's result
	*
	* @return The string content of your file
 	*/
 	UFUNCTION(BlueprintCallable, Category = "Read Write File")
	static FString ReadStringFromFile(FString FilePath, bool& bOutSuccess, FString& OutInfoMessage);

	/**
	* Create a text file with your content
	* 
 	* @param FilePath			The path to your file
	* @param String				The string to write in the file
	* @param bOutSuccess		If the action was a success or not
	* @param OutInfoMessage 	More information about the action's result
	*
 	*/
 	UFUNCTION(BlueprintCallable, Category = "Read Write File")
	static void WriteStringToFile(FString FilePath, FString String, bool& bOutSuccess, FString& OutInfoMessage);

};
