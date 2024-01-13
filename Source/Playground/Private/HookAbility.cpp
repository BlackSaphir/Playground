// Fill out your copyright notice in the Description page of Project Settings.


#include "HookAbility.h"

UHookAbility::UHookAbility()
{
}

UHookAbility::~UHookAbility()
{
}

void UHookAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, TEXT("Hook"));
}
