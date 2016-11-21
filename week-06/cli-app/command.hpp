#ifndef COMMAND_H
#define COMMAND_H

#include <string>

class Command {
private:
  std::string flag;
  std::string name;
  std::string description;
public:
  Command(std::string f, std::string n, std::string d);
  std::string get_formatted_details();
  virtual std::string execute();
};

#endif
