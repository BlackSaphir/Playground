// Fill out your copyright notice in the Description page of Project Settings.

#include "MeleeAbility.h"
#include "PgAbilityTaskPlayMontageAndWaitForEvent.h"

void UMeleeAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	CommitAbility(Handle, ActorInfo, ActivationInfo);



}
