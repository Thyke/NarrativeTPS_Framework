// // Copyright (C) Thyke 2025 All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NarrativeUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class NARRATIVEFRAMEWORK_API UNarrativeUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category="Narrative|Widget")
	void ActivateWidget();

	UFUNCTION(BlueprintCallable, Category="Narrative|Widget")
	void DeactivateWidget();

	UFUNCTION(BlueprintImplementableEvent, Category="Narrative|Widget", DisplayName="Activated")
	void K2_ActivateWidget();

	UFUNCTION(BlueprintImplementableEvent, Category="Narrative|Widget", DisplayName="Deactivated")
	void K2_DeactivateWidget();
};
