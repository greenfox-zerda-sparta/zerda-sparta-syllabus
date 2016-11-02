#include <iostream>

using namespace std;

int* create_array() {
  int* pointer = new int[5]  {1, 2, 3, 4, 5};
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
  delete[] array;

  return 0;
}
