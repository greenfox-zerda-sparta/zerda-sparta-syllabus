#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "decrypt.hpp"

TEST_CASE("It should shift one letter", "[decrypt]" ) {
  REQUIRE(caesar_cypher("a", 1) == "b");
  REQUIRE(caesar_cypher("b", 1) == "c");
  REQUIRE(caesar_cypher("a", 2) == "c");
}

TEST_CASE("It should shift all letters", "[decrypt]" ) {
  REQUIRE(caesar_cypher("abcd", 1) == "bcde");
}

TEST_CASE("It should overflow if running out from the abc", "[decrypt]") {
  REQUIRE(caesar_cypher("z", 1) == "a");
}

TEST_CASE("It should ignore non alphabetic characters", "[decrypt]") {
  REQUIRE(caesar_cypher("a b", 1) == "b c");
  REQUIRE(caesar_cypher("a1b", 1) == "b1c");
}

TEST_CASE("It should keep the cases", "[decrypt]") {
  REQUIRE(caesar_cypher("Ab", 1) == "Bc");
}

