// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Placement_Object.h"
#include "MySaveGame.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UMySaveGame : public USaveGame
{
	GENERATED_BODY()

		UPROPERTY()
		APlacement_Object* Placed_Object;

	FVector Location;

	FRotator Rotation;
	
};
