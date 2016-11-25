#include <iostream>
#include "todo-app.hpp"
#include "list-command.hpp"
#include "add-command.hpp"
#include "argument.hpp"

TodoApp::TodoApp() {
  commands.push_back(new ListCommand);
  commands.push_back(new AddCommand);
  commands.push_back(new Command("r", "remove", "Removes a task"));
  commands.push_back(new Command("c", "check", "Completes a tasks"));
}

TodoApp::~TodoApp() {
  for (unsigned int i = 0; i < commands.size(); ++i) {
    delete commands[i];
  }
}

void TodoApp::run(int argc, char** argv) {
  Argument argument(argc, argv);
  if (argument.get_type() == NONE) {
    print_usage();
  } else {
    for (unsigned int i = 0; i < commands.size(); ++i) {
      if (commands[i]->get_flag() == argument.get_flag()) {
        std::cout << commands[i]->execute(argument);
      }
    }
  }
}

void TodoApp::print_usage() {
  std::cout << "CLI Todo application" << std::endl;
  std::cout << "====================" << std::endl;
  std::cout << std::endl;
  std::cout << "Command line arguments:" << std::endl;
  for (unsigned int i = 0; i < commands.size(); ++i) {
    std::cout << commands[i]->get_formatted_details() << std::endl;
  }
}
