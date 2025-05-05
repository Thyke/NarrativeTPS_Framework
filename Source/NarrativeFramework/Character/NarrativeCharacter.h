// Copyright (C) Thyke 2025 All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NarrativeCharacter.generated.h"

// Base class for NarrativeFramework characters

UCLASS()
class NARRATIVEFRAMEWORK_API ANarrativeCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ANarrativeCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
