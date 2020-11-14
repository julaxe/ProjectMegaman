// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project1MGGameMode.h"
#include "Project1MGPlayerController.h"
#include "Project1MGCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject1MGGameMode::AProject1MGGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AProject1MGPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}