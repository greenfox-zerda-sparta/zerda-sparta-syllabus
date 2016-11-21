#include "command.hpp"
#include "todo-list-database.hpp"

Command::Command(std::string f, std::string n, std::string d) :
  flag(f),
  name(n),
  description(d) {}

std::string Command::get_formatted_details() {
  return " -" + flag + "\t" + name + "\t\t" + description;
}

std::string Command::execute() {
  TodoListDatabase db;
  TodoList todo_list = db.load();
  return todo_list.get_all_formatted_lines();
}
