// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "Experimental.h"
#include "ExperimentalGameMode.h"
#include "ExperimentalPlayerController.h"
#include "ExperimentalCharacter.h"

AExperimentalGameMode::AExperimentalGameMode(const class FPostConstructInitializeProperties& PCIP) : Super(PCIP)
{
	// use our custom PlayerController class
	PlayerControllerClass = AExperimentalPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/MyCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}