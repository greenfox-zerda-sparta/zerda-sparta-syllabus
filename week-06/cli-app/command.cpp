#include "command.hpp"
#include "todo-list-database.hpp"

Command::Command(std::string f, std::string n, std::string d) :
  flag(f),
  name(n),
  description(d) {}

std::string Command::get_formatted_details() {
  return " -" + flag + "\t" + name + "\t\t" + description;
}

std::string Command::execute() {}
