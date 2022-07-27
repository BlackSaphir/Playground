// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AbilitySystemInterface.h"
#include "Abilities/GameplayAbility.h"
#include "PgGameplayAbility.h"
#include "InputActionValue.h"
#include "ThirdPersonCharacter.generated.h"

class UInputAction;
class UInputMappingContext;


UCLASS()
class PLAYGROUND_API AThirdPersonCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

		// Functions

public:
	// Sets default values for this character's properties
	AThirdPersonCharacter();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void PawnClientRestart() override;



	// Called to bind functionality to input

	void PossessedBy(AController* NewController) override;

	virtual void Landed(const FHitResult& Hit) override;

	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;


	// Movement

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Controls|Input Actions")
		UInputAction* MovementAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Controls|Input Actions")
		UInputAction* LookAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Controls|Input Actions")
		UInputAction* JumpAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Controls|Input Mapping")
		UInputMappingContext* WalkInputMappingContext;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Controls|Input Mapping")
		int32 BaseMappingPriority = 0;

	UFUNCTION()
		void Movement(const FInputActionValue& Value);

	UFUNCTION()
		void Look(const FInputActionValue& Value);





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
		TArray<TSubclassOf<class UPgGameplayAbility>> Abilities;

	UPROPERTY(EditAnywhere)
		class UAbilityTask* AbilityTask;

	UPROPERTY(EditAnywhere, Category = "DoubleJump")
		float Jumpheight = 400;

	UPROPERTY(EditAnywhere, Category = "DoubleJump")
		int Jumpcount = 1;

	UPROPERTY(EditAnywhere, Category = "DoubleJump")
		int MaxJumpCount = 2;

	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

};

