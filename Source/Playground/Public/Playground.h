// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(LogPlayground, Log, All);


UENUM(BlueprintType)
enum class EAbilityInput : uint8
{
	None		UMETA(DisplayName = "None"),
	Confirm		UMETA(DisplayName = "Confirm"),
	Cancel		UMETA(DisplayName = "Cancel"),
	Dash		UMETA(DisplayName = "Dash"),
	DoubleJump	UMETA(DisplayName = "DoubleJump"),
};