#include <cstdint>
#include <iostream>
#include <array>
#include <algorithm> // for std::shuffle
#include <ctime> // for std::time
#include <random> // for std::mt19937
#include <cassert>
enum class CardRank {
  two,
  three,
  four,
  five,
  six,
  seven,
  eight,
  nine,
  ten,
  jack,
  queen,
  king,
  ace,
  total_ranks
};

enum class CardSuit {
  clubs,
  diamonds,
  hearts,
  spades,
  total_suits
};

struct Card {
  CardRank rank {};
  CardSuit suit{};
};

void printCard(const Card& card) {
 switch (card.rank) {
    case CardRank::two: std::cout << "2"; break;
    case CardRank::three: std::cout << "3"; break;
    case CardRank::four: std::cout << "4"; break;
    case CardRank::five: std::cout << "5"; break;
    case CardRank::six: std::cout << "6"; break;
    case CardRank::seven: std::cout << "7"; break;
    case CardRank::eight: std::cout << "8"; break;
    case CardRank::nine: std::cout << "9"; break;
    case CardRank::ten: std::cout << "T"; break;
    case CardRank::jack: std::cout << "J"; break;
    case CardRank::queen: std::cout << "Q"; break;
    case CardRank::king: std::cout << "K"; break;
    case CardRank::ace: std::cout << "A"; break;
    default:
    std::cout << '?';
      break;
 }

  switch (card.suit) {
    case CardSuit::clubs: std::cout << "C"; break;
    case CardSuit::diamonds: std::cout << "D"; break;
    case CardSuit::hearts: std::cout << "H"; break;
    case CardSuit::spades: std::cout << "S"; break;
    default: 
    std::cout << '?';
      break;
  
  }
}
using Deck = std::array<Card, 52>;
using Index = Deck::size_type;

Deck createDeck() {
  Deck deck {};
  Index index {0};

  for (int suit{ 0 }; suit < static_cast<int>(CardSuit::total_suits); ++suit)
  {
    for (int rank{ 0 }; rank < static_cast<int>(CardRank::total_ranks); ++rank)
    {
      deck[index].suit = static_cast<CardSuit>(suit);
      deck[index].rank = static_cast<CardRank>(rank);
      ++index;
    }
  }
  return deck;
}
void printDeck(const Deck& deck)
{
  for (const auto& card : deck)
  {
    printCard(card);
    std::cout << ' ';
  }

  std::cout << '\n';
}

void shuffleDeck(Deck deck) {
  static std::mt19937 mt{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };

  std::shuffle(deck.begin(), deck.end(), mt);

}

int getCardValue(const Card& card)
{
  switch (card.rank)
  {
  case CardRank::two:        return 2;
  case CardRank::three:        return 3;
  case CardRank::four:        return 4;
  case CardRank::five:        return 5;
  case CardRank::six:        return 6;
  case CardRank::seven:        return 7;
  case CardRank::eight:        return 8;
  case CardRank::nine:        return 9;
  case CardRank::ten:       return 10;
  case CardRank::jack:     return 10;
  case CardRank::queen:    return 10;
  case CardRank::king:     return 10;
  case CardRank::ace:      return 11;
  default:
    assert(false && "should never happen");
    return 0;
  }
}
int main (int argc, char *argv[])
{
  auto deck {createDeck()};
  shuffleDeck(deck);
  printDeck(deck);
  return 0;
}
