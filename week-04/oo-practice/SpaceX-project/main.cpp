#include <iostream>
#include "falcon1.hpp"
#include "falcon9.hpp"

using namespace std;

int main() {
  Falcon1 r1(10);
  Falcon9 r2(10);
  cout << r1.get_stats() << endl;
  cout << r2.get_stats() << endl;
  cout << r2.get_id() << endl;

  return 0;
}
