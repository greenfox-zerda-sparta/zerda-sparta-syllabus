#ifndef COMMAND_H
#define COMMAND_H

#include <string>
#include "argument.hpp"

class Command {
private:
  std::string flag;
  std::string name;
  std::string description;
public:
  Command(std::string f, std::string n, std::string d);
  std::string get_formatted_details();
  std::string get_flag();
  virtual std::string execute(Argument argument);
};

#endif
