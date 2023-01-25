//Modify the following program so that instead of having maxScore hold the largest score directly,
//a variable named maxIndex holds the index of the largest score.
//The program should still print the largest score.
#include <iostream>
#include <iterator> // for std::size

int main()
{
    constexpr int scores[]{ 84, 92, 76, 81, 56 };

    int maxScore{ 0 }; // Assume our largest score is 0 to start
    int maxIndex {0};
    // now look for a larger score in the full array
    for (int student{ 0 }; student < static_cast<int>(std::size(scores)); ++student)
    {

      //it does this first,
      //takes 0 index on both side and compares since the value is 84,
      //the statememt isn't true then does ++i and now the new values are
      //scores[student]: 92 , scores[maxIndex]: 84, since ++i only applies to ++student
      //and so on keeps checking
   if (scores[student] > scores[maxIndex]) {
      maxIndex = student;
   }

      // My solution
        // if (scores[student] > maxScore)
        // {
        //     // Replace maxScore by scores[student]
        //     maxScore = scores[student];
        // // Then assign maxIndex the current score's index i.e student
        //     maxIndex = student;
        // }
      // std::cout << "scores[student]: " << scores[student] << " ";
    }

 std::cout << "The best score: " << scores[maxIndex] << '\n';
    // std::cout << "The index for best score  " << maxScore << " is: " << maxIndex << '\n';
    return 0;
}
