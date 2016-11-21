#ifndef TODO_LIST_DATABASE_H
#define TODO_LIST_DATABASE_H

#include "todo-list.hpp"

class TodoListDatabase {
private:
  static char* DATABASE_FILE_NAME;
public:
  TodoList load();
};

#endif
