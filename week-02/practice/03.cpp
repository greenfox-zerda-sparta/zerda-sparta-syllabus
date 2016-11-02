#include <iostream>

using namespace std;

int main() {
  int min;
  int max;
  char input;

  cout << "set a min and a max" << endl;
  cin >> min >> max;

  cout << "is it smaller than " << max << "[y/n]" <<endl;
  cin >> input;
  if (input == 'n'){
    cout << "your answer is " << max << endl;
  }
  else {
    while (min != max){
      if (input == 'y'){
        min = (min + max) / 2;
        cout << "is it smaller than " << min << endl;
        cin >> input;
      }
      else if (input == 'n') {
        max = (min + max) / 2;
        cout << "is it smaller than " << max << endl;
        cin >> input;
      }
      else {
        cout << "wrong input try again [y/n]" << endl;
        cin >> input;
      }
    }
  }

  cout << "you thoguht of "<< max << endl;
  return 0;
}
