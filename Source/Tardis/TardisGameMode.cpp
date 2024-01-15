// Copyright Epic Games, Inc. All Rights Reserved.

#include "TardisGameMode.h"
#include "TardisCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATardisGameMode::ATardisGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
