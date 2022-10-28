/* Implement a game of hi-lo. First, your program should pick a random integer
between 1 and 100.
 * The user is given 7 tries to guess the number.

If the user does not guess the correct number,
the program should tell them whether they guessed too high or too low.
If the user guesses the right number, the program should tell them they won.
If they run out of guesses, the program should tell them they lost, and what the
correct number is. At the end of the game, the user should be asked if they want
to play again. If the user doesn’t enter ‘y’ or ‘n’, ask them again.

For this quiz, assume the user enters a valid number.
Use a Mersenne Twister PRNG, and seed it using a std::seed_seq with 8 results
from std::random_device. See lesson 7.19 -- Generating random numbers using
Mersenne Twister for more details.

Here’s what your output should look like: */

/*Approacing:-
 * 1. hard code the ans eg x{5}
 * 2. ask user to guess, using while loop until 7 tries
 * 3. if guessNum > x, printf("too high number")
 *    else if guessNum < x, print("too low number")
 *    else if guessNum == x, print("correct ans")
 *    if tries > 7 , print("you loose the game, the ans=x")
 *    call the function again to play if pressed yes or exit if pressed no*/

#include <cstdlib>
#include <iostream>
#include <random>

void tryAgain(int ans);
int errorHandling(int x);

int guessNum(int count) {
  std::cout << "Guess #" << count << " :";
  int guessNum{};
  std::cin >> guessNum;
  return guessNum;
}

void playAgain(int ans) {
  std::cout << "Do you want to play again?(y/n): ";
  char ch{};
  std::cin >> ch;

  switch (ch) {
  case 'y':
  case 'Y':
    tryAgain(ans);
    break;

  case 'N':
  case 'n':
    break;

  default:
    playAgain(ans);
    break;
  }
}

void revealAns(int ans) {
  std::cout << "You are out of tries... The correct ans is: " << ans
            << std::endl;
  playAgain(ans);
}

void tryAgain(int ans) {
  ++ans;
  for (int count{1}; count <= 7; ++count) {
    int x{guessNum(count)};
    errorHandling(x);
    if (x == ans) {
      std::cout << "Correct Ans!" << std::endl;
      break;
    } else if (x < ans) {
      std::cout << "Too low" << std::endl;
    } else {
      std::cout << "Too high" << std::endl;
    }
    if (count >= 6) {
      revealAns(ans);
    }
  }
}

int rng() {
  std::random_device rd;
  std::seed_seq seq{rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd()};

  std::mt19937 mt{seq};
  std::uniform_int_distribution<> num{
      1, 100}; // for C++14, use std::uniform_int_distribution<> die6{ 1, 6 };

  return num(mt);
}

int errorHandling(int x) {
  if (x > 100) {
    std::cerr << "You exceeded the guess limit!";
    std::exit(0);
  } else if (x < 1) {
    std::cerr << "You are under the guess limit!";
    std::exit(0);
  }
  return 0;
}

int main(int argc, char *argv[]) {

  int ans{rng()};
  tryAgain(ans);
  return 0;
}
