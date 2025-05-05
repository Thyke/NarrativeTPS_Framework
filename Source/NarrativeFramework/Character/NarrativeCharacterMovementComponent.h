// // Copyright (C) Thyke 2025 All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "NarrativeCharacterMovementComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class NARRATIVEFRAMEWORK_API UNarrativeCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()

public:
	UNarrativeCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
};
