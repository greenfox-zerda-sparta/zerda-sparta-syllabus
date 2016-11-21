#include <sstream>
#include "todo-list.hpp"

TodoList::TodoList(std::vector<std::string> l) : lines(l) {}

std::string TodoList::get_all_formatted_lines() {
  std::stringstream output;
  for (unsigned int i = 0; i < lines.size(); ++i) {
    output << i + 1 << " - " << lines[i] << std::endl; 
  }
  return output.str();
}
