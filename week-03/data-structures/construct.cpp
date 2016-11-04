#include <iostream>

using namespace std;

struct Food {
  string name;
  unsigned int calories; // in kcal
  unsigned short deliciousness; // scale from 1-10
  double amount; // in kg
};

// The big food equation
// F = 8.65
// calories = deliciousness * F * amount;
const double F = 8.65;

double get_calories(unsigned int d, double a) {
  return d * F * a;
}

void fill_food(Food& f, string name, unsigned int d, double a) {
  f.name = name;
  f.deliciousness = d;
  f.amount = a;
  f.calories = get_calories(d, a);
}

Food* construct_food(string name, unsigned int d, double a) {
  Food* f = new Food;
  f->name = name;
  f->deliciousness = d;
  f->amount = a;
  f->calories = d * F * a;
  return f;
}

int main() {
  Food pear = {"korte", 7 * F * 0.5, 7, 0.5};

  Food banana = {"banan", get_calories(7, 1), 7, 1};

  Food bacon;
  fill_food(bacon, "Csaszar-szalonna", 9, 2);

  Food* ice_cream = construct_food("Ben & Jerry's", 9, 0.5);

  delete ice_cream;


  return 0;
}
