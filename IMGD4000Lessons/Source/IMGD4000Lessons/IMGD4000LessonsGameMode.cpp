// Copyright Epic Games, Inc. All Rights Reserved.

#include "IMGD4000LessonsGameMode.h"
#include "IMGD4000LessonsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIMGD4000LessonsGameMode::AIMGD4000LessonsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
