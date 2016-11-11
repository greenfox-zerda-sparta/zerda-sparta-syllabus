#include "spacex.hpp"
#include "util.hpp"

SpaceX::SpaceX(unsigned int fuel) {
  this->fuel = fuel;
  rockets = NULL;
  rocket_count = 0;
}

std::string SpaceX::get_stats() {
  std::string output = "";
  output += "Fuel: " + to_string(fuel);
  output += ", Launches: " + to_string(get_all_launches())  + "\n";
  output += "Rockets:\n";
  for (int i = 0; i < rocket_count; ++i) {
    output += rockets[i]->get_stats() + "\n";
  }
  return output;
}

unsigned int SpaceX::get_all_launches() {
  unsigned int sum_launches = 0;
  for (int i = 0; i < rocket_count; ++i) {
    sum_launches += rockets[i]->get_launches();
  }
  return sum_launches;
}

void SpaceX::add_rocket(Rocket& rocket) {
  Rocket** temp = new Rocket*[rocket_count + 1];
  if (rockets != NULL) {
    for (int i = 0; i < rocket_count; ++i) {
      temp[i] = rockets[i];
    }
  }
  temp[rocket_count] = &rocket;
  delete[] rockets;
  rockets = temp;
  ++rocket_count;
}
