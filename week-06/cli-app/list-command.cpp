#include "list-command.hpp"
#include "todo-list-database.hpp"

ListCommand::ListCommand() :
  Command("l", "list", "Lists all the tasks") {}

std::string ListCommand::execute(Argument argument) {
  return todo_list.get_all_formatted_lines();
}
