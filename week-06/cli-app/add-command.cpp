#include "add-command.hpp"

AddCommand::AddCommand() :
  Command("a", "add", "Adds a new task") {}

std::string AddCommand::execute() {
  return "I'am Mister Meeseeks!! Look at mee!!\n";
}
