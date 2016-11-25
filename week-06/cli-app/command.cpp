#include "command.hpp"

Command::Command(std::string f, std::string n, std::string d) :
  flag(f),
  name(n),
  description(d),
  db(),
  todo_list(db.load()) {}

std::string Command::get_formatted_details() {
  return " -" + flag + "\t" + name + "\t\t" + description;
}

std::string Command::get_flag() {
  return flag;
}

std::string Command::execute(Argument argument) {}

