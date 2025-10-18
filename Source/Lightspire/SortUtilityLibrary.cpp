// Fill out your copyright notice in the Description page of Project Settings.

#include "SortUtilityLibrary.h"
#include "Math/UnrealMathUtility.h"

TArray<FST_ActorByDistance> USortUtilityLibrary::SortActorDistanceArray(TArray<FST_ActorByDistance> TargetArray)
{
	
	TargetArray.Sort([](const FST_ActorByDistance& A, const FST_ActorByDistance& B) {
		return A.Distance < B.Distance;
		});

	return TargetArray;
}

TArray<FST_ActorByDistance> USortUtilityLibrary::GetActorByCount(TArray<FST_ActorByDistance> TargetArray, int32 count) {

	TArray<FST_ActorByDistance> resultArray;

	if (count <= 0 || TargetArray.Num() == 0)
	{
		return resultArray;
	}

	int32 numToCopy = FMath::Min(count, TargetArray.Num());
	resultArray.Reserve(numToCopy);

	
	for (int32 i = 0; i < numToCopy; i++) {
		if (IsValid(TargetArray[i].Actor)) {
			resultArray.Add(TargetArray[i]);
		}
	}

	return resultArray;
}