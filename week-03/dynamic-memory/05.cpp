#include <iostream>

using namespace std;

/**
 * Create a function called "resize" that takes a pointer to an int array, it's size and it's new size,
 * then it should return a new pointer that points to the new resized array.
 * It should copy all the elements to the new array, if the array is bigger it should fill all the new slots with zeros.
 * It should delete the old array.
 */
int* resize(int * old, int length, int new_length);

int main() {
  int* array = new int[5];
  for (int i = 0; i < 5; ++i) {
    array[i] = i + 1;
  }

  int* new_array = resize(array, 5, 7);

  for (int i = 0; i < 7; ++i) {
    cout << new_array[i] << endl;
  }

  delete[] new_array;

  return 0;
}

int* resize(int* old, int length, int new_length) {
  int* new_arr = new int[new_length];
  for (int i = 0; i < new_length; i++) {
    new_arr[i] = (i < length ? old[i] : 0); 
  }
  delete[] old;
  return new_arr;
}

