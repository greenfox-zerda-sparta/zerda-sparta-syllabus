#ifndef PROGRAM_H
#define PROGRAM_H

#include "arguments.hpp"

class CaesarCypherProgram {
private:
  Arguments arguments;
public:
  CaesarCypherProgram();
  int run(int argc, char** argv);
};

#endif
