// Copyright (C) Thyke 2025 All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NarrativeWorldActor.generated.h"

// Base class for All World Actors

UCLASS()
class NARRATIVEFRAMEWORK_API ANarrativeWorldActor : public AActor
{
	GENERATED_BODY()

public:
	ANarrativeWorldActor(const FObjectInitializer& ObjectInitializer);

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
