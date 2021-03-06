// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TestingGoundsGameMode.h"
#include "TestingGoundsHUD.h"
#include "TestingGoundsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestingGoundsGameMode::ATestingGoundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestingGoundsHUD::StaticClass();
}
