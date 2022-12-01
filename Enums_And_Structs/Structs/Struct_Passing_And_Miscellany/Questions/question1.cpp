/* You are running a website, and you are trying to keep track
of how much money you make per day from advertising.
Declare an advertising struct that keeps track of how many ads you’ve shown to
readers, what percentage of ads were clicked on by users, and how much you
earned on average from each ad that was clicked. Read in values for each of
these fields from the user. Pass the advertising struct to a function that
prints each of the values, and then calculates how much you made for that day
(multiply all 3 fields together). */

#include <iostream>

struct Advertising {
  int nOfAds{};
  double clickedAds{};
  double avgEarning{};
};


Advertising getValue() {
  Advertising adv;
  std::cout << "How many ads were show today?: ";
  std::cin >> adv.nOfAds;
  std::cout << "How many ads were clicked today?: ";
  std::cin >> adv.clickedAds;
  std::cout << "What was the average earnings per click today?: ";
  std::cin >> adv.avgEarning;
  return adv;
}

void printValue(const Advertising& advertising) {
  std::cout << "\n\n";
  std::cout << "Total no.of ads: " << advertising.nOfAds << '\n';
  std::cout << "Total no.of clicked ads: " << advertising.clickedAds << '\n';
  std::cout << "Average Earning per click: " << advertising.avgEarning << '\n';
  std::cout << "Total Earning: "<< (advertising.nOfAds * advertising.clickedAds / 100 * advertising.avgEarning);
}

int main(int argc, char *argv[]) {
  Advertising adv{getValue()};
  printValue(adv);
  std::cout << '\n';
  return 0;
}
