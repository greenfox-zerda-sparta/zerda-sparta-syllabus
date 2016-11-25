#ifndef ARGUMENT_H
#define ARGUMENT_H

#include <string>

class Argument {
private:
  std::string string_second_argument;
public:
  Argument(int argc, char** argv);
  std::string get_string_second_argument();
};

# endif
