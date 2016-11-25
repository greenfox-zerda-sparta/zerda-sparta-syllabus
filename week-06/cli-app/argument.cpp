#include "argument.hpp"

Argument::Argument(int argc, char** argv) {
  if (argc == 3) {
    string_second_argument = argv[2];
  }
}

std::string Argument::get_string_second_argument() {
  return string_second_argument;
}
