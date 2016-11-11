#include "util.hpp"
#include "rocket.hpp"

using namespace std;

unsigned int LAST_ID = 0;

Rocket::Rocket() {
  this->launches = 0;
  this->id = LAST_ID;
  LAST_ID++;
  this->fuel_level = 0;
}

const unsigned int Rocket::get_id() const {
  return id;
}

void Rocket::launch() {
  ++launches;
  fuel_level -= fuel_consumption;
}

const unsigned int Rocket::refill() {
  const unsigned int used_fuel = tank_size - fuel_level;
  fuel_level = tank_size;
  return used_fuel;
}

string Rocket::get_stats() const {
  return "Type: " + type_name + ", Fuel: " + to_string(fuel_level) + ", Launches: " + to_string(launches);
}
