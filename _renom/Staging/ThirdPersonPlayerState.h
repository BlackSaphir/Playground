// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemComponent.h"
#include "ThirdPersonPlayerState.generated.h"

/**
 *
 */
UCLASS()
class MYPROJECT_API AThirdPersonPlayerState : public APlayerState
{
	GENERATED_BODY()

		AThirdPersonPlayerState();




	// Variables

protected:

	UPROPERTY()
		class UAbilitySystemComponent* AbilitySystemComponent;

};
