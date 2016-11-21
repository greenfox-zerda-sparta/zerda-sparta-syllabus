#ifndef TODO_APP_H
#define TODO_APP_H

#include <vector>
#include "command.hpp"

class TodoApp {
private:
  std::vector<Command*> commands;
  void print_usage();
public:
  TodoApp();
  ~TodoApp();
  void run(int argc, char** argv);
};

#endif
