// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "Playground.h"
#include "PgGameplayAbility.generated.h"

/**
 *
 */
UCLASS()
class PLAYGROUND_API UPgGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()


public:

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
		EAbilityInput AbilityInputID = EAbilityInput::None;
	
};
