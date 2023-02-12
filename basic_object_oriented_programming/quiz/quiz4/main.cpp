#include <iostream>
#include <algorithm> // std::shuffle
#include <array>
#include <cassert>
#include <ctime> // std::time
#include <random> // std::mt19937


class Card {
public:
enum  Suit 
{
    club,
    diamond,
    heart,
    spade,

    max_suits
};

enum Rank 
{
    rank_2,
    rank_3,
    rank_4,
    rank_5,
    rank_6,
    rank_7,
    rank_8,
    rank_9,
    rank_10,
    rank_jack,
    rank_queen,
    rank_king,
    rank_ace,

    max_ranks
};
private:
  Rank m_rank {};
  Suit m_suit {};

public:
  Card() = default;
  Card(Rank rank, Suit suit ): m_rank{rank}, m_suit {}{}

 void print() const
{
    switch (m_rank)
    {
    case Rank ::rank_2:      std::cout << '2';   break;
    case Rank ::rank_3:      std::cout << '3';   break;
    case Rank ::rank_4:      std::cout << '4';   break;
    case Rank ::rank_5:      std::cout << '5';   break;
    case Rank ::rank_6:      std::cout << '6';   break;
    case Rank ::rank_7:      std::cout << '7';   break;
    case Rank ::rank_8:      std::cout << '8';   break;
    case Rank ::rank_9:      std::cout << '9';   break;
    case Rank ::rank_10:     std::cout << 'T';   break;
    case Rank ::rank_jack:   std::cout << 'J';   break;
    case Rank ::rank_queen:  std::cout << 'Q';   break;
    case Rank ::rank_king:   std::cout << 'K';   break;
    case Rank ::rank_ace:    std::cout << 'A';   break;
    default:
        std::cout << '?';
        break;
    }

    switch (m_suit)
    {
    case Suit ::club:       std::cout << 'C';   break;
    case Suit ::diamond:    std::cout << 'D';   break;
    case Suit ::heart:      std::cout << 'H';   break;
    case Suit ::spade:      std::cout << 'S';   break;
    default:
        std::cout << '?';
        break;
    }
}

int value() const
{
    switch (m_rank)
    {
    case Rank ::rank_2:        return 2;
    case Rank ::rank_3:        return 3;
    case Rank ::rank_4:        return 4;
    case Rank ::rank_5:        return 5;
    case Rank ::rank_6:        return 6;
    case Rank ::rank_7:        return 7;
    case Rank ::rank_8:        return 8;
    case Rank ::rank_9:        return 9;
    case Rank ::rank_10:       return 10;
    case Rank ::rank_jack:     return 10;
    case Rank ::rank_queen:    return 10;
    case Rank ::rank_king:     return 10;
    case Rank ::rank_ace:      return 11;
    default:
        assert(false && "should never happen");
        return 0;
    }
}
};

class Deck
{
public:
    using deck = std::array<Card, 52>;
    using Index = deck::size_type;

private:
    deck m_deck{};
    Index m_cardIndex {};
public:
  Deck(){
      Index index {0};
      m_cardIndex = index;
      for (int suit {0}; suit < Card::max_suits; ++suit) {
        for (int rank {0}; rank  < Card::max_ranks; ++rank) {
        m_deck[index] = { static_cast<Card::Rank>(rank), static_cast<Card::Suit>(suit) };
          ++index;
        }
      
      }
    }

void print() const
{
    for (const auto& card : m_deck)
    {
        card.print();
        std::cout << ' ';
    }

    std::cout << '\n';
}
  void shuffle(){
    static std::mt19937 mt{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };

    std::shuffle(m_deck.begin(), m_deck.end(), mt);
    m_cardIndex = 0;
}


const Card& dealCard(){
      assert(m_cardIndex < m_deck.size());
      return m_deck[m_cardIndex++];
}
};
class Player {
private:
  int g_maximumScore {};

  int m_score{};
public:
  Player() {
    g_maximumScore = 21;
  }
 int drawCard(Deck& deck) {
    int value = deck.dealCard().value();
    m_score += value;
    return value;
  }

  int score() const {
    return m_score;
  }
  bool isBust() {
    if (m_score > g_maximumScore) {
     return true;
    }
    return false;
  }
};
int main (int argc, char *argv[])
{
  
// a.
  // const Card cardQueenHearts{ Card::rank_queen, Card::heart };
  // cardQueenHearts.print();
  // std::cout << " has the value " << cardQueenHearts.value() << '\n';

  // b.
    // Deck deck;
    // deck.print();
    // deck.shuffle();
    // deck.print();

  // c.
 /*    Deck deck{};

    deck.shuffle();
    deck.print();

    std::cout << "The first card has value: " << deck.dealCard().value() << '\n';
    std::cout << "The second card has value: " << deck.dealCard().value() << '\n';
 */
 
  // d. 
  Deck deck{};

    deck.shuffle();
    deck.print();

    Player player{};
    Player dealer{};

    int playerCard { player.drawCard(deck) };
    std::cout << "The player drew a card with value " << playerCard << " and now has score " << player.score() << '\n';

    int dealerCard { dealer.drawCard(deck) };
    std::cout << "The dealer drew a card with value " << dealerCard << " and now has score " << dealer.score() << '\n';
  return 0;
}
