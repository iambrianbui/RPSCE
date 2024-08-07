// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayingCard.h"
#include "Components/ActorComponent.h"
#include "CardManager.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RPSCE_API UCardManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCardManager();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintReadWrite)
	TArray<UPlayingCard*> CardDeck;

	void InitializeCardDeck();

	UFUNCTION(BlueprintCallable)
	bool DrawCardFromDeck();

	UPROPERTY(BlueprintReadWrite)
	TArray<UPlayingCard*> CardHand;

	

		
};
