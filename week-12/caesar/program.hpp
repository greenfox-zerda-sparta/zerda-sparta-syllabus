#ifndef PROGRAM_H
#define PROGRAM_H

class CaesarCypherProgram {
  int _argc;
  char** _argv;
public:
  CaesarCypherProgram(int argc, char** argv);
  int run(); 
};

#endif
