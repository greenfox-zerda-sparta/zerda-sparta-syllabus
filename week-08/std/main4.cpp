#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Pirate {
private:
  int gold;
  string name;
public:
  Pirate(int g, string n) : gold(g), name(n) {}
  void greet() {
    cout << "Arr! " << name << "! I have " << gold << " golds" << endl;
  }
  int get_gold() {
    return gold;
  }
};

bool order_pirates_by_gold(Pirate* p1, Pirate* p2) {
  return p1->get_gold() < p2->get_gold();
}

void greet_pirate(Pirate* p) {
  p->greet();
} 

int main() {
  vector<Pirate*> mates = {
    new Pirate(10, "Jack"),
    new Pirate(3, "Joe"),
    new Pirate(3, "Joe2"),
    new Pirate(25, "Black Beard")
  };

  sort(mates.begin(), mates.end(), order_pirates_by_gold);

  for (vector<Pirate*>::iterator it = mates.begin(); it != mates.end(); ++it) {
  
  }

  for_each(mates.begin(), mates.end(), [](Pirate* p) {
    p->greet();
  });


  return 0;
}
