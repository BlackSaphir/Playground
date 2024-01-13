// Fill out your copyright notice in the Description page of Project Settings.


#include "ClimbableWall.h"

#include "Components/StaticMeshComponent.h"
#include "Components/WidgetComponent.h"

// Sets default values
AClimbableWall::AClimbableWall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Wall = CreateDefaultSubobject<UStaticMeshComponent>("Wall");
	HookWidget = CreateDefaultSubobject<UWidgetComponent>("HookWidget");
	HookPoint = CreateDefaultSubobject<USceneComponent>("HookPoint");

}

// Called when the game starts or when spawned
void AClimbableWall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AClimbableWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

