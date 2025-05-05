// Copyright (C) Thyke 2025 All Rights Reserved.

#include "NarrativeWorldActor.h"


#include UE_INLINE_GENERATED_CPP_BY_NAME(NarrativeWorldActor)

ANarrativeWorldActor::ANarrativeWorldActor(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = false;
}

void ANarrativeWorldActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ANarrativeWorldActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

