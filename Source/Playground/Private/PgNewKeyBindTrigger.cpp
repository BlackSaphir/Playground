// Fill out your copyright notice in the Description page of Project Settings.


#include "PgNewKeyBindTrigger.h"
#include "DrawDebugHelpers.h"

APgNewKeyBindTrigger::APgNewKeyBindTrigger()
{
	//OnActorBeginOverlap.AddDynamic(this, &APgNewKeyBindTrigger::BeginOverlap);
}

void APgNewKeyBindTrigger::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}
