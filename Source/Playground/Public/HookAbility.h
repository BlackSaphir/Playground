// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PgGameplayAbility.h"
#include "HookAbility.generated.h"

/**
 * 
 */
UCLASS()
class PLAYGROUND_API UHookAbility : public UPgGameplayAbility
{
	GENERATED_BODY()

public:

	UHookAbility();
	virtual ~UHookAbility() override;

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	
};
