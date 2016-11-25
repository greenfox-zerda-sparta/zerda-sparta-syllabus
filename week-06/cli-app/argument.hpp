#ifndef ARGUMENT_H
#define ARGUMENT_H

#include <string>

enum ArgumentType {
  NONE,
  FLAG,
  FLAG_AND_STRING
};

class Argument {
private:
  int argc;
  char** argv;
  std::string string_second_argument;
  std::string flag;
  ArgumentType type;
  void parse_flag_from_args();
  void parse_type_from_args();
public:
  Argument(int argc, char** argv);
  std::string get_string_second_argument();
  ArgumentType get_type();
  std::string get_flag();
};

# endif
