// Copyright (C) Thyke 2025 All Rights Reserved.


#include "NarrativeCharacter.h"
#include "NarrativeCharacterMovementComponent.h"


#include UE_INLINE_GENERATED_CPP_BY_NAME(NarrativeCharacter)

ANarrativeCharacter::ANarrativeCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UNarrativeCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	PrimaryActorTick.bCanEverTick = true;
}


void ANarrativeCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}


void ANarrativeCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


