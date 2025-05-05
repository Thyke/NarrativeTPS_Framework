// // Copyright (C) Thyke 2025 All Rights Reserved


#include "NarrativePlayerCharacter.h"

#include "GameFramework/GameplayCameraComponent.h"


#include UE_INLINE_GENERATED_CPP_BY_NAME(NarrativePlayerCharacter)

ANarrativePlayerCharacter::ANarrativePlayerCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;

	NarrativeGameplayCamera = CreateOptionalDefaultSubobject<UGameplayCameraComponent>(TEXT("NarrativeGameplayCamera"));
	check(GetMesh())
	if (GetMesh())
	{
		NarrativeGameplayCamera->SetupAttachment(GetMesh());
		NarrativeGameplayCamera->SetRelativeLocation(FVector(0.0f, 0.0f, 100.0f));
		NarrativeGameplayCamera->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
	}
}


void ANarrativePlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}


void ANarrativePlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


