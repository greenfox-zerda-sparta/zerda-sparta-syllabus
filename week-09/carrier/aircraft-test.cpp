#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "aircraft.hpp"

TEST_CASE("Aircraft constructor") {
  Aircraft aircraft(8);

  REQUIRE(aircraft.get_current_ammo() == 0);
}

TEST_CASE("Aircraft refill") {
  Aircraft aircraft(8);
  unsigned int store = 20;
  aircraft.refill(store);
  REQUIRE(aircraft.get_current_ammo() == 8);
  REQUIRE(store == 12);
}

TEST_CASE("Aircraft refill with insufficient ammo") {
  Aircraft aircraft(8);
  unsigned int store = 4;
  aircraft.refill(store);
  REQUIRE(aircraft.get_current_ammo() == 4);
  REQUIRE(store == 0);
}

