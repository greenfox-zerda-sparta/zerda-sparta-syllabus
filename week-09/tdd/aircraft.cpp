#include "aircraft.hpp"

Aircraft::Aircraft() : max_ammo(12) {}

int Aircraft::get_ammo() {
  return current_ammos;
}
void Aircraft::refill(unsigned int& ammo_store) {
  unsigned int max_ammo_to_fill = max_ammo > ammo_store ? ammo_store : max_ammo;
  current_ammos = max_ammo_to_fill;
  ammo_store -= max_ammo_to_fill;
}
