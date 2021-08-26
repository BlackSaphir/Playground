// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon_Base.h"
#include "Melee_Ability.generated.h"

/**
 *
 */
UCLASS()
class PLAYGROUND_API UMelee_Ability : public UWeapon_Base
{
	GENERATED_BODY()

		void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
};
