#include <iostream>

int main(int argc, char* argv[]) {
  std::cout << "CLI Todo application" << std::endl;
  std::cout << "====================" << std::endl;
  std::cout << std::endl;
  std::cout << "Command line arguments:" << std::endl;
  std::cout << " -l\tlist\t\tLists all the tasks" << std::endl;
  std::cout << " -a\tadd\t\tAdds a new task" << std::endl;
  std::cout << " -r\tremove\t\tRemoves a task" << std::endl;
  std::cout << " -c\tcheck\t\tCompletes a task" << std::endl;
  return 0;
}
