#include <fstream>
#include <sstream>
#include "file-handler.hpp"

FileHandler::FileHandler(char* file_name) {
  std::ifstream file;
  file.open(file_name);
  if (!file.is_open()) {
    _is_exists = false;
    _content = "";
    return;
  }
  _is_exists = true;
  std::stringstream buffer;
  buffer << file.rdbuf();
  _content = buffer.str();
  file.close();
}

bool FileHandler::is_exists() {
  return _is_exists;
}

std::string FileHandler::get_content() {
  return _content;
}


