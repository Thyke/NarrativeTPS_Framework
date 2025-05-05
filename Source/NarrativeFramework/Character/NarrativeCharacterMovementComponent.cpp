// // Copyright (C) Thyke 2025 All Rights Reserved


#include "NarrativeCharacterMovementComponent.h"


#include UE_INLINE_GENERATED_CPP_BY_NAME(NarrativeCharacterMovementComponent)

UNarrativeCharacterMovementComponent::UNarrativeCharacterMovementComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UNarrativeCharacterMovementComponent::BeginPlay()
{
	Super::BeginPlay();
}


void UNarrativeCharacterMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                                         FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

