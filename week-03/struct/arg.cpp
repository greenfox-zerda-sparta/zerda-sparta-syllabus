#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  cout << argc << endl;
  cout << argv[0] << endl; 
  if (argc > 1) {
    cout << argv[1] << endl;
  }
  return 125;
}
