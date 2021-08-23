// Fill out your copyright notice in the Description page of Project Settings.


#include "Dash_Ability.h"
#include "GameFramework/RootMotionSource.h"
#include "PG_AbilityTask_PlayMontageAndWaitForEvent.h"
#include "Abilities/Tasks/AbilityTask_ApplyRootMotionConstantForce.h"
#include "ThirdPersonCharacter.h"


void UDash_Ability::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	CommitAbility(Handle, ActorInfo, ActivationInfo);

	AThirdPersonCharacter* Character = Cast<AThirdPersonCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());
	UAnimMontage* MontageToPlay = Dash_Montage;

	UPG_AbilityTask_PlayMontageAndWaitForEvent* Task = UPG_AbilityTask_PlayMontageAndWaitForEvent::PlayMontageAndWaitForEvent(this, NAME_None, MontageToPlay, FGameplayTagContainer(),1.f, NAME_None, false, 1.f);

	Task->ReadyForActivation();

	UAbilityTask_ApplyRootMotionConstantForce::ApplyRootMotionConstantForce(this, FName("None"), GetAvatarActorFromActorInfo()->GetActorForwardVector(), Strength, Duration, false, nullptr ,ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity, GetAvatarActorFromActorInfo()->GetVelocity(), 0.0f, true);


	EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
}




