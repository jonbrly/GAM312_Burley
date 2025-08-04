// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ObjectiveWidget.generated.h"

/**
 * 
 */
UCLASS()
class GAM312_BURLEY_API UObjectiveWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent)
		void UpdateMatObj(float matsCollected);

	UFUNCTION(BlueprintImplementableEvent)
		void UpdateBuildObj(float objectsBuilt);
	
};
