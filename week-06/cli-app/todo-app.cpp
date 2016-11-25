#include <iostream>
#include "todo-app.hpp"
#include "list-command.hpp"
#include "add-command.hpp"

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
  if (argc == 1) {
    print_usage();
  } else {
    if (argv[1][1] == 'a') {
      std::cout << commands[1]->execute();
    } else {
      std::cout << commands[0]->execute();
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
