#include <iostream>
#include "falcon1.hpp"
#include "falcon9.hpp"
#include "spacex.hpp"

using namespace std;

int main() {
  SpaceX spacex(1000);
  Falcon1 r1;
  Falcon9 r2;

  spacex.add_rocket(r1);
  spacex.add_rocket(r2);

  spacex.refill_by_id(0);
  spacex.refill_by_id(1);
  spacex.launch_by_id(0);
  spacex.launch_by_id(1);


  cout << spacex.get_stats() << endl;

  cout << r1.get_stats() << endl;
  cout << "used fuel:" << r1.refill() << endl;
  cout << r1.get_stats() << endl;
  cout << r2.get_stats() << endl;
  cout << r2.get_id() << endl;

  return 0;
}

