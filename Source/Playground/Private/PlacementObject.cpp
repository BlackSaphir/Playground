// Fill out your copyright notice in the Description page of Project Settings.


#include "PlacementObject.h"

// Sets default values
APlacementObject::APlacementObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
	BaseMesh->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BaseMeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));

	if (BaseMeshAsset.Object)
	{
		BaseMesh->SetStaticMesh(BaseMeshAsset.Object);
	}

	Tags.Add("Penis");

}

// Called when the game starts or when spawned
void APlacementObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlacementObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

