#ifndef LIST_COMMAND_H
#define LIST_COMMAND_H

#include <string>
#include "command.hpp"

class ListCommand : public Command {
public:
  ListCommand();
  virtual std::string execute();
};

#endif
