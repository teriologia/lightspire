// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LocationUtilityLibrary.generated.h"

/**
 * 
 */
UCLASS()
class LIGHTSPIRE_API ULocationUtilityLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "Location Utilty Functions", meta = (DisplayName = "Get Random Location Around Origin (XY Plane)"))
	static TArray<FVector> GetRandomLocationsAroundOrigin(const FVector& Origin, int32 Count, float MinDistance = 0.0f, float Radius = 1000.0f);
	
};
