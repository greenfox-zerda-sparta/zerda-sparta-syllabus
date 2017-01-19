#ifndef ARGUMENTS_H
#define ARGUMENTS_H

#include <string>

class Arguments {
private:
  int _argc;
  char** _argv;
public:
  Arguments() {};
  void set(int argc, char** argv) {
    _argc = argc;
    _argv = argv;
    if (_argc == 1) {
      throw "No arguments provided.";
    }
  }
  std::string get_input_file_name() {
    return _argv[1];
  }
  int get_shift() {
    return std::stoi(_argv[3]);
  }
};

#endif
