#include "add-command.hpp"
#include "todo-list-database.hpp"

AddCommand::AddCommand() :
  Command("a", "add", "Adds a new task") {}

std::string AddCommand::execute(Argument argument) {
  TodoListDatabase db;
  TodoList todo_list = db.load();
  todo_list.add_todo(argument.get_string_second_argument());
  db.save(todo_list);
  return "";
}
