#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<vector<int> > matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  for (vector<vector<int> >::iterator it = matrix.begin(); it != matrix.end(); ++it) {
    for (vector<int>::iterator it2 = (*it).begin(); it2 != (*it).end(); ++it2) {
      cout << *it2;
    }
    cout << endl;
  }

  return 0;
}
