// Fill out your copyright notice in the Description page of Project Settings.


#include "DashAbility.h"
#include "GameFramework/RootMotionSource.h"
#include "Abilities/GameplayAbility.h"
#include "PgAbilityTaskPlayMontageAndWaitForEvent.h"
#include "Abilities/Tasks/AbilityTask_ApplyRootMotionConstantForce.h"
#include "ThirdPersonCharacter.h"


void UDashAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	CommitAbility(Handle, ActorInfo, ActivationInfo);

	AThirdPersonCharacter* Character = Cast<AThirdPersonCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());
	UAnimMontage* MontageToPlay = DashMontage;

	UPgAbilityTaskPlayMontageAndWaitForEvent* Task = UPgAbilityTaskPlayMontageAndWaitForEvent::PlayMontageAndWaitForEvent(this, NAME_None, MontageToPlay, FGameplayTagContainer(),1.f, NAME_None, false, 1.f);

	Task->ReadyForActivation();

	UAbilityTask_ApplyRootMotionConstantForce::ApplyRootMotionConstantForce(this, FName("None"), GetAvatarActorFromActorInfo()->GetActorForwardVector(), Strength, Duration, false, nullptr ,ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity, GetAvatarActorFromActorInfo()->GetVelocity(), 0.0f, true);


	EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
}




