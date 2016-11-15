#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main(int argc, char* argv[]) {
  if (argc == 3) {
    char* input_file_name = argv[1];
    char* output_file_name = argv[2];

    std::ifstream input_file;
    input_file.open(input_file_name);
    std::string file_content;
    std::stringstream buffer;

    if (!input_file.is_open()) {
      std::cerr << "Could not open input file" << std::endl;
      return 1;
    }

    buffer << input_file.rdbuf();
    file_content = buffer.str();
    input_file.close();

    std::ofstream output_file;
    output_file.open(output_file_name);
    output_file << file_content;

    return 0;
  } else {
    std::cerr << "Too many or too few arguments" << std::endl;
    return 1;
  }
}
