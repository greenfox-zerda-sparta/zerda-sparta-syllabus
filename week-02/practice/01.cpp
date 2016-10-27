#include <iostream>

using namespace std;

int main() {
  int my_array[] = {1, 2, 3, 4, 5};
  int* pointer = my_array;

  cout << sizeof(my_array) / sizeof(*my_array) << endl;

  cout << sizeof(pointer) / sizeof(int) << endl;

  return 0;
}
