#include <iostream>
#include "rocket.hpp"

using namespace std;

int main() {
  Rocket r1(10);
  Rocket r2(10);
  cout << r1.get_stats() << endl;
  cout << r2.get_stats() << endl;
  cout << r2.get_id() << endl;

  return 0;
}
