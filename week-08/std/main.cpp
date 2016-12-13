#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int numbers_array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int sum1 = 0;
  for (int i = 0; i < 10; ++i) {
    sum1 += numbers_array[i];
  }
  cout << sum1 << endl;

  vector<int> numbers_vector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int sum2 = 0;
  for (vector<int>::iterator it = numbers_vector.begin(); it != numbers_vector.end(); ++it) {
    sum2 += *it;
  }
  cout << sum2 << endl;


  cout << accumulate(numbers_vector.begin(), numbers_vector.end(), 0) - 5 << endl;


  return 0;
}
