// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Placement_Object.generated.h"

UCLASS()
class PLAYGROUND_API APlacement_Object : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlacement_Object();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;




private:

	class UStaticMeshComponent* BaseMesh;

};
