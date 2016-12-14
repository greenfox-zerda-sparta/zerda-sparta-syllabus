#include <iostream>

using namespace std;

int a = 5;

int& get5() {
  return a;
}

int main() {
  cout << get5();
}
