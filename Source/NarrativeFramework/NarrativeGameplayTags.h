// // Copyright (C) Thyke 2025 All Rights Reserved

#pragma once

#include "NativeGameplayTags.h"


// ---------------------------------------------------------------------------------
//  NARRATIVEINPUTMODETAGS: Tags for different input modes (UI, Game, etc.)
// ---------------------------------------------------------------------------------
#pragma region INPUT_MODE_TAGS
namespace NarrativeInputModeTags
{
	// Input modes for different game/UI states
	NARRATIVEFRAMEWORK_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Input_Mode);
	NARRATIVEFRAMEWORK_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Input_Mode_UI);
	NARRATIVEFRAMEWORK_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Input_Mode_Game);
	NARRATIVEFRAMEWORK_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Input_Mode_GameAndUI);
}
#pragma endregion