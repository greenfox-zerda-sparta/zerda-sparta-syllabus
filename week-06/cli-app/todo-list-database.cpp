#include <fstream>
#include "todo-list-database.hpp"

char* TodoListDatabase::DATABASE_FILE_NAME = (char*)".db.txt";

TodoList TodoListDatabase::load() {
  std::ifstream db_file(".db.txt");
  std::string line;
  std::vector<std::string> lines;
  while (getline(db_file, line)) {
    lines.push_back(line);
  }
  TodoList todo_list(lines);
  return todo_list;
}

void TodoListDatabase::save(TodoList list) {
  std::ofstream db_file(".db.txt");
  db_file << list.get_to_save();
}
