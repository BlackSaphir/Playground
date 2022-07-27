// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PgGameplayAbility.h"
#include "WeaponBase.generated.h"

/**
 *
 */
UCLASS()
class PLAYGROUND_API UWeaponBase : public UPgGameplayAbility
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		float Damage;

	UPROPERTY(EditAnywhere)
		UStaticMesh* WeaponMesh;

	UPROPERTY(EditAnywhere)
		int Ammunition;

	UPROPERTY(EditAnywhere)
		UAnimMontage* MontageToPlay;

};
