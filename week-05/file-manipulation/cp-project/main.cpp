#include <iostream>
#include <fstream>
#include "file-handler.hpp"

int main(int argc, char* argv[]) {
  if (argc == 3) {
    char* input_file_name = argv[1];
    char* output_file_name = argv[2];

    FileHandler input_file(input_file_name);

    if (!input_file.is_exists()) {
      std::cerr << "Could not open input file" << std::endl;
      return 1;
    }

    std::ofstream output_file;
    output_file.open(output_file_name);
    output_file << input_file.get_content();

    return 0;
  } else {
    std::cerr << "Too many or too few arguments" << std::endl;
    return 1;
  }
}
