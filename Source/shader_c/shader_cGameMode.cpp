// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "shader_cGameMode.h"
#include "shader_cCharacter.h"
#include "UObject/ConstructorHelpers.h"

Ashader_cGameMode::Ashader_cGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
