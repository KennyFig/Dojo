// Copyright Epic Games, Inc. All Rights Reserved.

#include "DojoGameMode.h"
#include "DojoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADojoGameMode::ADojoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
