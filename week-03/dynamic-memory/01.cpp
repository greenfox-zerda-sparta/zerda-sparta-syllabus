#include <iostream>

using namespace std;

int* create_array() {
  int new_array[5] = {1, 2, 3, 4, 5};
  int* pointer = new_array;
  return pointer;
}

void other() {
  int a[5] = {5, 6, 7, 8, 9};
}

int main() {
  int* array;
  array = create_array();
  other();
  cout << array[0] << " " << array[1] << endl;

  return 0;
}
