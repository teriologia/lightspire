// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SortUtilityLibrary.generated.h"


USTRUCT(BlueprintType)
struct FST_ActorByDistance
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sort")
	AActor* Actor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sort")
	float Distance;
};

/**
 * 
 */
UCLASS()
class LIGHTSPIRE_API USortUtilityLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Array Sort Functions", meta = (DisplayName = "Sort Actor-Distance Array"))
	static TArray<FST_ActorByDistance> SortActorDistanceArray(TArray<FST_ActorByDistance> TargetArray);

	UFUNCTION(BlueprintCallable, Category = "Array Sort Functions", meta = (DisplayName = "Get Actor By Count"))
	static TArray<FST_ActorByDistance> GetActorByCount(TArray<FST_ActorByDistance> TargetArray, int32 Count);
	
};
