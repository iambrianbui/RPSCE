// Fill out your copyright notice in the Description page of Project Settings.


#include "RPSCE/Public/CardManager.h"

// Sets default values for this component's properties
UCardManager::UCardManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCardManager::BeginPlay()
{
	Super::BeginPlay();

	// ...
	InitializeCardDeck();
	
}


// Called every frame
void UCardManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCardManager::InitializeCardDeck()
{
	CardDeck.Empty();

	TArray<ECardType> AllCardTypes;
	AllCardTypes.Add(ECardType::Rock);
	AllCardTypes.Add(ECardType::Paper);
	AllCardTypes.Add(ECardType::Scissors);

	for (ECardType CardType : AllCardTypes)
	{
		for (int i = 0; i < 5; i++)
		{
			UPlayingCard* PlayingCard = NewObject<UPlayingCard>();
			PlayingCard->SetCardType(CardType);
			CardDeck.Add(PlayingCard);
		}
	}

}

bool UCardManager::DrawCardFromDeck()
{
	if (CardHand.Num() >= 3) return false;
	if (CardDeck.Num() <= 0) return false;

	CardHand.Add(CardDeck.Pop(true));
	return true;
}

