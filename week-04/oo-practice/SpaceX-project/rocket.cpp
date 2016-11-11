#include "util.hpp"
#include "rocket.hpp"

using namespace std;

unsigned int LAST_ID = 0;

Rocket::Rocket(unsigned int fuel_level) {
  this->launches = 0;
  this->id = LAST_ID;
  LAST_ID++;
  this->fuel_level = fuel_level;
}

const unsigned int Rocket::get_id() const {
  return id;
}

string Rocket::get_stats() {
  return "Type: " + type_name + ", Fuel: " + to_string(fuel_level) + ", Launches: " + to_string(launches);
}
