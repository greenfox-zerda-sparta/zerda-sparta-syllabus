#ifdef TEST

#include "catch.hpp"
#include "decrypt.hpp"
#include "arguments.hpp";


TEST_CASE("It should throw an error if no arguments provided", "[arguments]") {
  char* argv[] = {"program"};
  Arguments arguments;
  REQUIRE_THROWS(arguments.set(1, argv));
}

TEST_CASE("It should provide the input file", "[arguments]") {
  char* argv[] = {"program", "input.txt", "-s", "10"};
  Arguments arguments;
  arguments.set(5, argv);
  REQUIRE(arguments.get_input_file_name() == "input.txt");
}

TEST_CASE("It should provide the shift", "[arguments]") {
  char* argv[] = {"program", "input.txt", "-s", "10"};
  Arguments arguments;
  arguments.set(5, argv);
  REQUIRE(arguments.get_shift() == 10);
}

#endif
