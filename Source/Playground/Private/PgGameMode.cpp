// Fill out your copyright notice in the Description page of Project Settings.


#include "PgGameMode.h"
#include "PgPlayerController.h"
#include "ThirdPersonCharacter.h"

APgGameMode::APgGameMode()
{
	PlayerControllerClass = APgPlayerController::StaticClass();

	static ConstructorHelpers::FClassFinder<AThirdPersonCharacter> BP_PlayerCharacter(TEXT("/Game/TopDownCPP/Blueprints/BP_ThirdPerson"));
	if (BP_PlayerCharacter.Class != nullptr)
	{
		DefaultPawnClass = BP_PlayerCharacter.Class;
	}
}
