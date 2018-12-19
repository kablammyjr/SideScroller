// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "SideScrollerGameMode.h"
#include "SideScrollerCharacter.h"

ASideScrollerGameMode::ASideScrollerGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ASideScrollerCharacter::StaticClass();	
}
