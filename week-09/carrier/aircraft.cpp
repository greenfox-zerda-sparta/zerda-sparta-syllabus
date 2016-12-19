#include "aircraft.hpp"

Aircraft::Aircraft(unsigned int _max_ammo) :
  current_ammo(0), max_ammo(_max_ammo) {}

unsigned int Aircraft::get_current_ammo() {
  return current_ammo;
}

void Aircraft::refill(unsigned int& store) {
  int max_possible_ammo = store < max_ammo ? store : max_ammo;
  current_ammo = max_possible_ammo;
  store -= max_possible_ammo;
}
