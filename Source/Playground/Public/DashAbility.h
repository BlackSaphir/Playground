// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PgGameplayAbility.h"
#include "DashAbility.generated.h"

class AThirdPersonCharacter;

/**
 * 
 */
UCLASS()
class PLAYGROUND_API UDashAbility : public UPgGameplayAbility
{
	GENERATED_BODY()

public:

	UDashAbility();
	virtual ~UDashAbility() override;
	void Activate(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData, AThirdPersonCharacter* Character);
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;


	UPROPERTY(EditAnywhere)
	UAnimMontage* DashMontage;

	UPROPERTY(EditAnywhere)
		float Strength;

	UPROPERTY(EditAnywhere)
		float Duration;

	AThirdPersonCharacter* CharacterRef;

};


