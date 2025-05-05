// // Copyright (C) Thyke 2025 All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Character/NarrativeCharacter.h"
#include "NarrativePlayerCharacter.generated.h"

class UGameplayCameraComponent;
UCLASS()
class NARRATIVEFRAMEWORK_API ANarrativePlayerCharacter : public ANarrativeCharacter
{
	GENERATED_BODY()

public:
	ANarrativePlayerCharacter(const FObjectInitializer& ObjectInitializer);

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Camera")
	TObjectPtr<UGameplayCameraComponent> NarrativeGameplayCamera;

public:
	virtual void Tick(float DeltaTime) override;

	
};
