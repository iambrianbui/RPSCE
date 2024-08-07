// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PlayingCard.generated.h"

UENUM(BlueprintType)
enum class ECardType : uint8
{
	Rock,
	Paper,
	Scissors
};

/**
 * 
 */
UCLASS()
class RPSCE_API UPlayingCard : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	ECardType CardType;

	UPROPERTY(BlueprintReadWrite)
	bool bShouldShow = false;

	UFUNCTION(BlueprintCallable)
	void SetCardType(ECardType IncomingCardType) { CardType = IncomingCardType; };
};
