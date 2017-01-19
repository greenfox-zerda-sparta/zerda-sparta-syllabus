#include <iostream>
#include "decrypt.hpp"
#include "file_manipulation.hpp"
#include "program.hpp"

CaesarCypherProgram::CaesarCypherProgram() {};

int CaesarCypherProgram::run(int argc, char** argv) {
  try {
    arguments.set(argc, argv);
    std::string input = read_file_by_file_name(arguments.get_input_file_name());
    std::cout << caesar_cypher(input, arguments.get_shift()) << std::endl;
    return 0;
  } catch (const char* error_message) {
    std::cerr << error_message << std::endl;
    return 1;
  }
}
