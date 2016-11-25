#include "argument.hpp"

Argument::Argument(int argc, char** argv) {
  this->argc = argc;
  this->argv = argv;
  parse_flag_from_args();
  parse_type_from_args();
 }

void Argument::parse_flag_from_args() {
  const int FLAG_ARG_INDEX = 1;
  const int CHAR_INDEX = 1;
  if (argc > 1) {
    flag = argv[FLAG_ARG_INDEX][CHAR_INDEX];
  }
}

void Argument::parse_type_from_args() {
  if (argc == 1) {
    type = NONE;
  } else if (argc == 2) {
    type = FLAG;
  } else if (argc == 3) {
    type = FLAG_AND_STRING;
    string_second_argument = argv[2];
  }
}

std::string Argument::get_string_second_argument() {
  return string_second_argument;
}

ArgumentType Argument::get_type() {
  return type;
}


std::string Argument::get_flag() {
  return flag;
}
