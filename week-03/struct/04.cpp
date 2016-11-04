#include <string>
#include <iostream>

using namespace std;

struct Pirate {
  string name;
  bool has_wooden_leg;
  short int gold_count;
};

// Create a function that takes an array of pirates (and it's length) then returns the sum of the golds of all pirates

// Create a function that takes an array of pirates (and it's length) then returns the average of the gold / pirate

// Create a function that takes an array of pirates (and it's length) then returns the name of the
// richest that has wooden leg

string find_the_richest_with_wooden_leg(Pirate* pirates, int length) {
  Pirate richest = {"", false, 0};
  for (int i = 0; i < length; ++i) {
    if (pirates[i].has_wooden_leg
        && pirates[i].gold_count > richest.gold_count) {
      richest = pirates[i];
    }
  }
  return richest.name;
}

int main() {
  Pirate pirates[] = {
    {"Jack", false, 18},
    {"Uwe", true, 8},
    {"Hook", true, 12},
    {"Halloween kid", false, 0},
    {"Sea Wolf", true, 14},
    {"Morgan", false, 1}
  };

  cout << find_the_richest_with_wooden_leg(pirates, 6) << endl;

  return 0;
}
