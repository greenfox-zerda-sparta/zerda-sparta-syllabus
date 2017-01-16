#ifndef FILE_MANIPULATION_H
#define FILE_MANIPULATION_H

#include <string>
#include <fstream>
#include <streambuf>

std::string read_file_by_file_name(std::string file_name) {
  std::ifstream t(file_name.c_str());
  std::string str((std::istreambuf_iterator<char>(t)),
                  std::istreambuf_iterator<char>());
  return str;
}

#endif
