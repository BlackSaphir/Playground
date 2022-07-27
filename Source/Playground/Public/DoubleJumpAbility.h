// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PgGameplayAbility.h"
#include "DoubleJumpAbility.generated.h"

/**
 *
 */
UCLASS()
class PLAYGROUND_API UDoubleJumpAbility : public UPgGameplayAbility
{
	GENERATED_BODY()

		virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;





};
