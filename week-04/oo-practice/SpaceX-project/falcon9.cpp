#include "falcon9.hpp"

Falcon9::Falcon9(unsigned int fuel_level) : Rocket(fuel_level) {
  fuel_consumption = 9;
  type_name = "Falcon9";
}
