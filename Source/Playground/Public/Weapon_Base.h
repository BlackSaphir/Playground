// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PG_GameplayAbility.h"
#include "Weapon_Base.generated.h"

/**
 *
 */
UCLASS()
class PLAYGROUND_API UWeapon_Base : public UPG_GameplayAbility
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		float Damage;

	UPROPERTY(EditAnywhere)
		UStaticMesh* Weapon_Mesh;

	UPROPERTY(EditAnywhere)
		int Ammunition;

	UPROPERTY(EditAnywhere)
		UAnimMontage* MontageToPlay;

};
