#include <iostream>
#include "aircraft.hpp"

using namespace std;

int main() {
  Aircraft aircraft;
  cout << aircraft.get_current_ammo() << endl;
  return 0;
}
