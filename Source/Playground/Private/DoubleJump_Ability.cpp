// Fill out your copyright notice in the Description page of Project Settings.


#include "DoubleJump_Ability.h"
#include "ThirdPersonCharacter.h"

void UDoubleJump_Ability::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	CommitAbility(Handle, ActorInfo, ActivationInfo);

	AThirdPersonCharacter* Character = Cast<AThirdPersonCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());
	
	if (Character->Jumpcount <= Character->MaxJumpCount)
	{
		Character->LaunchCharacter(FVector(0, 0, Character->Jumpheight), false, true);
		Character->Jumpcount++;

	}




	EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
}
