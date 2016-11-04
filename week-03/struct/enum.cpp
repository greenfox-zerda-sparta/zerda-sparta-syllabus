#include <iostream>

using namespace std;

enum Month {
  JANUARY,
  FEBRUARY,
  MARCH,
  APRIL
};

int get_days_since_date(int year, Month month, int day) {
  if (year % 4 == 0 && month == FEBRUARY) {
  
  }
}

int main(int argc, int** argv) {
  cout << get_days_since_date(2006, APRIL, 12);
  
  return 125;
}
