#include "spacex.hpp"
#include "util.hpp"

SpaceX::SpaceX(unsigned int fuel) {
  this->fuel = fuel;
  rockets = NULL;
  rocket_count = 0;
}

std::string SpaceX::get_stats() const {
  return "Fuel: " + to_string(fuel);
}

void SpaceX::add_rocket(Rocket& rocket) {
  Rocket* temp = new Rocket[rocket_count + 1];
  if (rockets != NULL) {
    for (int i = 0; i < rocket_count; ++i) {
      temp[i] = rockets[i];
    }
  }
  temp[rocket_count] = rocket;
  delete[] rockets;
  rockets = temp;
  ++rocket_count;
}
