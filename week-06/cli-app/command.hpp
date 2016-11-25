#ifndef COMMAND_H
#define COMMAND_H

#include <string>
#include "argument.hpp"
#include "todo-list.hpp"
#include "todo-list-database.hpp"

class Command {
private:
  std::string flag;
  std::string name;
  std::string description;
  TodoListDatabase db;
protected:
  TodoList todo_list;
public:
  Command(std::string f, std::string n, std::string d);
  std::string get_formatted_details();
  std::string get_flag();
  virtual std::string execute(Argument argument);
};

#endif
