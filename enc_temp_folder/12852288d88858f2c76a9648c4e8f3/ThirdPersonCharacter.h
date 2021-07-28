// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AbilitySystemInterface.h"
#include "Abilities/GameplayAbility.h"
#include "PG_GameplayAbility.h"
#include "ThirdPersonCharacter.generated.h"

UCLASS()
class PLAYGROUND_API AThirdPersonCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

		// Functions

public:
	// Sets default values for this character's properties
	AThirdPersonCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);


	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void PossessedBy(AController* NewController) override;

	virtual void Landed(const FHitResult& Hit) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;



	// Variables


public:

	UPROPERTY(EditAnywhere, Category = Camera)
		class USpringArmComponent* CameraBoom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera)
		class UCameraComponent* FollowCamera;

	UPROPERTY()
		class UCharacterMovementComponent* CharacterMovementclass;

	UPROPERTY(EditAnywhere, Category = Camera)
		float BaseTurnRate;

	UPROPERTY(EditAnywhere, Category = Camera)
		float BaseLookUpRate;

	UPROPERTY(BlueprintReadOnly)
		class UAbilitySystemComponent* AbilitySystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Abilities)
		TArray<TSubclassOf<class UPG_GameplayAbility>> Abilities;

	UPROPERTY(EditAnywhere, Category = "DoubleJump")
		float Jumpheight;

	UPROPERTY(EditAnywhere, Category = "DoubleJump")
		int Jumpcount = 0;

	UPROPERTY(EditAnywhere, Category = "DoubleJump")
		int MaxJumpCount = 2;

	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

};
