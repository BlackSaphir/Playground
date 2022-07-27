// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "PgNewKeyBindTrigger.generated.h"

/**
 * 
 */
UCLASS()
class PLAYGROUND_API APgNewKeyBindTrigger : public ATriggerBox
{
    GENERATED_BODY()

        APgNewKeyBindTrigger();

        UFUNCTION()
        void BeginOverlap(UPrimitiveComponent* OverlappedComponent,
            AActor* OtherActor,
            UPrimitiveComponent* OtherComp,
            int32 OtherBodyIndex,
            bool bFromSweep,
            const FHitResult& SweepResult);
};
