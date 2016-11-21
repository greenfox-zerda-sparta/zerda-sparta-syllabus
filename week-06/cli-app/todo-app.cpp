#include <iostream>
#include "todo-app.hpp"

TodoApp::TodoApp() {
  Command list_command("l", "list", "Lists all the tasks");
  commands.push_back(list_command);
  Command add_command("a", "add", "Adds a new task");
  commands.push_back(add_command);
  Command remove_command("r", "remove", "Removes a task");
  commands.push_back(remove_command);
  Command check_command("c", "check", "Completes a tasks");
  commands.push_back(check_command);
}

void TodoApp::run(int argc, char** argv) {
  if (argc == 1) {
    print_usage();
  } else {
    std::cout << commands[0].execute();
  }
}

void TodoApp::print_usage() {
  std::cout << "CLI Todo application" << std::endl;
  std::cout << "====================" << std::endl;
  std::cout << std::endl;
  std::cout << "Command line arguments:" << std::endl;
  for (unsigned int i = 0; i < commands.size(); ++i) {
    std::cout << commands[i].get_formatted_details() << std::endl;
  }
}
