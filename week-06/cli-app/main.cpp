#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {
  if (argc == 1) {
    std::cout << "CLI Todo application" << std::endl;
    std::cout << "====================" << std::endl;
    std::cout << std::endl;
    std::cout << "Command line arguments:" << std::endl;
    std::cout << " -l\tlist\t\tLists all the tasks" << std::endl;
    std::cout << " -a\tadd\t\tAdds a new task" << std::endl;
    std::cout << " -r\tremove\t\tRemoves a task" << std::endl;
    std::cout << " -c\tcheck\t\tCompletes a task" << std::endl;
  } else {
    std::ifstream db_file(".db.txt");
    std::string line;
    int i = 1;
    while (getline(db_file, line)) {
      std::cout << i << " - " << line << std::endl;
      i++;
    }
  }
  return 0;
}
