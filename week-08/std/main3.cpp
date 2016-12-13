#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool descending(int i, int j) {
  cout << "bazki valaki meghivta!!!" << i << j << endl;
  return i > j;
} 

int main() {
  vector<int> numbers = {7, 6, 9, 2, 3, 1, 5, 8, 4};

  sort(numbers.begin(), numbers.end(), descending);

  for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
    cout << *it << endl;
  }



  return 0;
}
