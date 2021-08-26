// Fill out your copyright notice in the Description page of Project Settings.

#include "Melee_Ability.h"
#include "PG_AbilityTask_PlayMontageAndWaitForEvent.h"

void UMelee_Ability::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	CommitAbility(Handle, ActorInfo, ActivationInfo);



}
