#include <iostream>

int main(int argc, char* argv[]) {
  if (argc == 3) {
    std::cout << "From: " << argv[1] << std::endl;
    std::cout << "To: " << argv[2] << std::endl;
    return 0;
  } else {
    std::cerr << "Too many or too few arguments" << std::endl;
    return 1;
  }
}
