// Fill out your copyright notice in the Description page of Project Settings.


#include "LocationUtilityLibrary.h"
#include "Math/UnrealMathUtility.h"

TArray<FVector> ULocationUtilityLibrary::GetRandomLocationsAroundOrigin(const FVector& Origin, int32 Count, float MinDistance, float Radius) {
	TArray<FVector> RandomLocations;
	if (Count <= 0) {
		return RandomLocations;
	}

	MinDistance = FMath::Max(0.0f, MinDistance);
	Radius = FMath::Max(MinDistance, Radius);
	RandomLocations.Reserve(Count);

	for (int32 i = 0; i < Count; ++i) {
		FVector RandomDirection = FMath::VRand();
		RandomDirection.Z = 0.0f;
		RandomDirection.Normalize();
		if (RandomDirection.IsNearlyZero()) { RandomDirection = FVector(1.0f, 0.0f, 0.0f); }

		float RandomDistance = FMath::RandRange(MinDistance, Radius);
		FVector RandomLocation = Origin + RandomDirection * RandomDistance;
		RandomLocations.Add(RandomLocation);
	}
	return RandomLocations;
}
