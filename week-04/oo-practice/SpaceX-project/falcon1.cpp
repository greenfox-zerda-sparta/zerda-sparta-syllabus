#include "falcon1.hpp"

Falcon1::Falcon1(unsigned int fuel_level) : Rocket(fuel_level) {
  fuel_consumption = 1;
  type_name = "Falcon1";
}
