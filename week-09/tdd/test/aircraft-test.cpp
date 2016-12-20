#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../aircraft.hpp"

Aircraft create_aircraft_with_ammo(unsigned int ammos);
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

TEST_CASE("Aircraft fight should give back the overall damage") {
  Aircraft aircraft = create_aircraft_with_ammo(20);
  REQUIRE(aircraft.fight() == 600);
}

TEST_CASE("Aircraft fight calculate damage based on current ammo") {
  Aircraft aircraft = create_aircraft_with_ammo(4);
  REQUIRE(aircraft.fight() == 200);
}

TEST_CASE("Aircraft fight should use all the ammos") {
  Aircraft aircraft = create_aircraft_with_ammo(20);
  aircraft.fight();
  REQUIRE(aircraft.get_ammo() == 0);
}

Aircraft create_aircraft_with_ammo(unsigned int ammos) {
  Aircraft aircraft;
  unsigned int ammo_store = ammos;
  aircraft.refill(ammo_store);
  return aircraft;
}

void test_decrement_ammo_store(unsigned int original, unsigned int reduced) {
  Aircraft aircraft;
  unsigned int ammo_store = original;
  aircraft.refill(ammo_store);
  REQUIRE(ammo_store == reduced);
}

void test_filled_ammos(unsigned int store, unsigned int aircraft_ammos) {
  Aircraft aircraft = create_aircraft_with_ammo(store);
  REQUIRE(aircraft.get_ammo() == aircraft_ammos);
}
