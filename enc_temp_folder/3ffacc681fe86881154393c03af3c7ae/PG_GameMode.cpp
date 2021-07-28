// Fill out your copyright notice in the Description page of Project Settings.


#include "PG_GameMode.h"
#include "PG_PlayerController.h"
#include "ThirdPersonCharacter.h"

APG_GameMode::APG_GameMode()
{
	PlayerControllerClass = APG_PlayerController::StaticClass();

	static ConstructorHelpers::FClassFinder<AThirdPersonCharacter> BP_PlayerCharacter(TEXT("/Game/TopDownCPP/Blueprints/BP_ThirdPerson.BP_ThirdPerson"));
	if (BP_PlayerCharacter.Class != nullptr)
	{
		DefaultPawnClass = BP_PlayerCharacter.Class;
	}
}
