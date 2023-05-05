// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThegamesTheGameGameMode.h"
#include "ThegamesTheGameHUD.h"
#include "ThegamesTheGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThegamesTheGameGameMode::AThegamesTheGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AThegamesTheGameHUD::StaticClass();
}
