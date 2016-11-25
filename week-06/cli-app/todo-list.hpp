#ifndef TODO_LIST_H
#define TODO_LIST_H

#include <string>
#include <vector>

class TodoList {
private:
  std::vector<std::string> lines;
public:
  TodoList(std::vector<std::string> l);
  std::string get_all_formatted_lines();
  std::string get_to_save();
  void add_todo(std::string task_description);
};

#endif
