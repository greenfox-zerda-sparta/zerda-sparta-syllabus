#include "list-command.hpp"
#include "todo-list-database.hpp"

ListCommand::ListCommand() :
  Command("l", "list", "Lists all the tasks") {}

std::string ListCommand::execute() {
  TodoListDatabase db;
  TodoList todo_list = db.load();
  return todo_list.get_all_formatted_lines();
}
