#include <iostream>

using namespace std;

int* create_array_with_fives() {
  int* arr = new int[5];
  for (int i = 0; i < 5; ++i) {
    arr[i] = 5;
  }
  return arr;
}

int main() {
  int* array = create_array_with_fives();
  for (int i = 0; i < 5; ++i) {
    cout << array[i] << endl;
  }
  delete[] array;

  return 0;
}
