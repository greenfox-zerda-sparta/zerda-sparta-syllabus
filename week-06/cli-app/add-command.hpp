#ifndef ADD_COMMAND_H
#define ADD_COMMAND_H

#include "command.hpp"

class AddCommand : public Command {
public:
  AddCommand();
  virtual std::string execute();
};

#endif
