#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Car {
public:
  unsigned int km;
  string type;
  Car() {
    km = 0;
    type = "Lada";
  }

  Car(const Car& other) {
    km = other.km;
    type = other.type;
    cout << "Look the copy ctr has been called" << endl;
  }
};


int main() {
  Car c1;
  c1.type = "Trabant";
  c1.km = 520000000;
  Car c2 = c1;

  vector<Car> cars;
  cars.push_back(c2);
  cout << cars[0].km;


  return 0;
}
