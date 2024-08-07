# Rock Paper Scissors:  Championship Edition 


## CardManager
### CardDeck
TArray of PlayingCards, initially starts off as 15 cards, with 5 ROCK, 5 PAPER, and 5 SCISSOR cards.

#### DrawCard
#### RevealTopCard

### CardHand
TArray of PlayingCards, maximum limit of 3 cards.

#### SwapCards
Used for shuffling cards in hand (APM spam).

#### RemoveCard
#### PlayCard

### ModiferHand
TArray of ModifierCards, maximum limit of 6 cards.

## Object Glossary
### PlayingCard
UObject that can be either be ROCK, PAPER, or SCISSORS.
ECardType CardType;  //  rock, paper, scissors
bool bShouldShow = false;  //  is the card revealed?
