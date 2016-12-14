#include <iostream>

using namespace std;

void increment(int i) {
  i += 10;
}

void increment2(int* i) {
  *i += 10;
}

void increment3(int& i) {
  i += 10;
}

int main() {
  int apples = 8;
  increment(apples);
  cout << "After normal func " << apples << endl;

  increment2(&apples);
  cout << "After pointer func " << apples << endl;

  increment3(apples);
  cout << "After refernece func " << apples << endl;

  return 0;
}
