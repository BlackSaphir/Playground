// Fill out your copyright notice in the Description page of Project Settings.


#include "PgInputConfig.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "ThirdPersonCharacter.h"

UPgInputConfig::UPgInputConfig(const FObjectInitializer& ObjectInitializer)
{
}

const UInputAction* UPgInputConfig::FindNativeInputActionForTag(const FGameplayTag& InputTag, bool bNotFound) const
{
	for (const FPgInputAction& Action : NativeInputAction)
	{
		if (Action.InputAction && (Action.InputTag == InputTag))
		{
			return Action.InputAction;
		}
	}

	return nullptr;
}

const UInputAction* UPgInputConfig::FindAbilityInputActionForTag(const FGameplayTag& InputTag, bool bNotFound) const
{
	for (const FPgInputAction& Action : AbilityInputActions)
	{
		if (Action.InputAction && (Action.InputTag == InputTag))
		{
			return Action.InputAction;
		}
	}

	return  nullptr;
}
