#include "aircraft.hpp"

const unsigned int F35_MAX_AMMO = 12;
const unsigned int F35_BASE_DAMAGE = 50;

Aircraft::Aircraft() : max_ammo(F35_MAX_AMMO) {}

int Aircraft::get_ammo() {
  return current_ammos;
}
void Aircraft::refill(unsigned int& ammo_store) {
  unsigned int max_ammo_to_fill = max_ammo > ammo_store ? ammo_store : max_ammo;
  current_ammos = max_ammo_to_fill;
  ammo_store -= max_ammo_to_fill;
}

unsigned int Aircraft::fight() {
  int damage = current_ammos * F35_BASE_DAMAGE;
  current_ammos = 0;
  return damage;
}
