// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "Playground.h"
#include "PG_GameplayAbility.generated.h"

/**
 *
 */
UCLASS()
class PLAYGROUND_API UPG_GameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()


public:

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
		EAbilityInput AbilityInputID = EAbilityInput::None;

private:

	
	
};
