#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../aircraft.hpp"

void test_decrement_ammo_store(unsigned int original, unsigned int reduced);
void test_filled_ammos(unsigned int store, unsigned int aircraft_ammos);

TEST_CASE("Aircraft created with 0 ammo") {
  Aircraft aircraft;
  REQUIRE(aircraft.get_ammo() == 0);
}

TEST_CASE("Aircraft should refill its ammos") {
  test_filled_ammos(20, 12);
}

TEST_CASE("Aircraft should decrement the ammo store") {
  test_decrement_ammo_store(20, 8);
  test_decrement_ammo_store(22, 10);
}

TEST_CASE("Aircraft should only use the available ammo") {
  test_decrement_ammo_store(4, 0);
}

TEST_CASE("Aircraft should refill its ammos to less if not sufficient store") {
  test_filled_ammos(4, 4);
}

void test_decrement_ammo_store(unsigned int original, unsigned int reduced) {
  Aircraft aircraft;
  unsigned int ammo_store = original;
  aircraft.refill(ammo_store);
  REQUIRE(ammo_store == reduced);
}

void test_filled_ammos(unsigned int store, unsigned int aircraft_ammos) {
  Aircraft aircraft;
  unsigned int ammo_store = store;
  aircraft.refill(ammo_store);
  REQUIRE(aircraft.get_ammo() == aircraft_ammos);
}
