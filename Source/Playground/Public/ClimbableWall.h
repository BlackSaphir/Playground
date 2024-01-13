// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ClimbableWall.generated.h"

class UWidgetComponent;


UCLASS()
class PLAYGROUND_API AClimbableWall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AClimbableWall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* Wall;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UWidgetComponent* HookWidget;

	UPROPERTY(EditAnywhere)
		USceneComponent* HookPoint;
};
