// Fill out your copyright notice in the Description page of Project Settings.


#include "Dash_Ability.h"
#include "GameFramework/RootMotionSource.h"
#include "ThirdPersonCharacter.h"
#include "Camera/CameraComponent.h"


void UDash_Ability::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	CommitAbility(Handle, ActorInfo, ActivationInfo);
	
	AThirdPersonCharacter* Character = Cast<AThirdPersonCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());
	Character->LaunchCharacter(FVector(Character->GetFollowCamera()->GetForwardVector().X,Character->GetFollowCamera()->GetForwardVector().Y, 0), false, false);

		/*FRootMotionSource_ConstantForce* ConstantForce = new FRootMotionSource_ConstantForce();
		ConstantForce->InstanceName = "Dash";
		ConstantForce->AccumulateMode = ERootMotionAccumulateMode::Override;
		ConstantForce->Priority = 8;
		ConstantForce->Force = FVector(10000, 10000, 0);
		ConstantForce->Duration = 1.0f;
		ConstantForce->StrengthOverTime = nullptr;
		ConstantForce->FinishVelocityParams.Mode = ERootMotionFinishVelocityMode::SetVelocity;
		ConstantForce->FinishVelocityParams.SetVelocity = FVector::ZeroVector;*/

	EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
}
