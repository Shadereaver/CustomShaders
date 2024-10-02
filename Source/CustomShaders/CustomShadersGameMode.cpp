// Copyright Epic Games, Inc. All Rights Reserved.

#include "CustomShadersGameMode.h"
#include "CustomShadersCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACustomShadersGameMode::ACustomShadersGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
