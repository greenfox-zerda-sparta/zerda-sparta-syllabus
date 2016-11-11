#include "spacex.hpp"
#include "util.hpp"

SpaceX::SpaceX(unsigned int fuel) {
  this->fuel = fuel;
  rockets = NULL;
  rocket_count = 0;
}

std::string SpaceX::get_stats() {
  std::string output = "";
  output += "Fuel: " + to_string(fuel) + ", ";
  output += "Launches: " + to_string(get_all_launches())  + "\n";
  output += "Rockets:\n";
  output += get_all_rocket_stats();
  return output;
}

std::string SpaceX::get_all_rocket_stats() {
  std::string rocket_stats = "";
  for (int i = 0; i < rocket_count; ++i) {
    rocket_stats += rockets[i]->get_stats() + "\n";
  }
  return rocket_stats;
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

Rocket& SpaceX::get_rocket_by_id(unsigned int id) {
  for (int i = 0; i < rocket_count; ++i) {
    if (rockets[i]->get_id() == id) {
      return *rockets[i];
    }
  }
}

void SpaceX::refill_by_id(unsigned int id) {
  get_rocket_by_id(id).refill();
}

void SpaceX::launch_by_id(unsigned int id) {
  get_rocket_by_id(id).launch();
}
