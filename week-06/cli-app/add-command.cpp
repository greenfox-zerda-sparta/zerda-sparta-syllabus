#include "add-command.hpp"

AddCommand::AddCommand() :
  Command("a", "add", "Adds a new task") {}

std::string AddCommand::execute(Argument argument) {
  return "Added todo " + argument.get_string_second_argument();
}
