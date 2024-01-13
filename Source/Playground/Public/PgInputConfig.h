// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "PgInputConfig.generated.h"


class UInputAction;
class UInputMappingContext;
class UThirdPersonCharacter;

USTRUCT(BlueprintType)
struct FPgInputAction
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly)
		const UInputAction* InputAction = nullptr;

	UPROPERTY(EditDefaultsOnly)
		FGameplayTag InputTag;
};




/**
 * 
 */
UCLASS(BlueprintType, Const)
class PLAYGROUND_API UPgInputConfig : public UDataAsset
{
	GENERATED_BODY()

public:

	UPgInputConfig(const FObjectInitializer& ObjectInitializer);

	const UInputAction* FindNativeInputActionForTag(const FGameplayTag& InputTag, bool bNotFound = true) const;
	const UInputAction* FindAbilityInputActionForTag(const FGameplayTag& InputTag, bool bNotFound = true) const;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		TArray<FPgInputAction> NativeInputAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		TArray<FPgInputAction> AbilityInputActions;
};
