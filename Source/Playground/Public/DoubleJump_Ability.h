// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PG_GameplayAbility.h"
#include "DoubleJump_Ability.generated.h"

/**
 *
 */
UCLASS()
class PLAYGROUND_API UDoubleJump_Ability : public UPG_GameplayAbility
{
	GENERATED_BODY()

		virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;





};
