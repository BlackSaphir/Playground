// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "PG_GameplayAbility.h"
#include "Dash_Ability.generated.h"

/**
 * 
 */
UCLASS()
class PLAYGROUND_API UDash_Ability : public UPG_GameplayAbility
{
	GENERATED_BODY()


	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;


	UPROPERTY(EditAnywhere)
	UAnimMontage* Dash_Montage;

	UPROPERTY(EditAnywhere)
		float Strength;

	UPROPERTY(EditAnywhere)
		float Duration;


};


