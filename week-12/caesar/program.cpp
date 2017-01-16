#include <iostream>
#include "decrypt.hpp"
#include "file_manipulation.hpp"
#include "program.hpp"

CaesarCypherProgram::CaesarCypherProgram(int argc, char** argv) :
  _argc(argc), _argv(argv) {};

int CaesarCypherProgram::run() {
  std::string input = read_file_by_file_name(_argv[1]);
  std::cout << caesar_cypher(input, std::stoi(_argv[3])) << std::endl;
  return 0;
}
