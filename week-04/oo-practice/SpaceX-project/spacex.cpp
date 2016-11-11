#include "spacex.hpp"
#include "util.hpp"

SpaceX::SpaceX(unsigned int fuel) : rockets() {
  this->fuel = fuel;
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
  for (int i = 0; i < rockets.get_size(); ++i) {
    rocket_stats += rockets.at(i).get_stats() + "\n";
  }
  return rocket_stats;
}

unsigned int SpaceX::get_all_launches() {
  unsigned int sum_launches = 0;
  for (int i = 0; i < rockets.get_size(); ++i) {
    sum_launches += rockets.at(i).get_launches();
  }
  return sum_launches;
}

void SpaceX::add_rocket(Rocket& rocket) {
  rockets.push_back(rocket);
}

void SpaceX::refill_by_id(unsigned int id) {
  rockets.get_rocket_by_id(id).refill();
}

void SpaceX::launch_by_id(unsigned int id) {
  rockets.get_rocket_by_id(id).launch();
}
