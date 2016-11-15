#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H

#include <string>

class FileHandler {
  std::string _content;
  bool _is_exists;
public:
  FileHandler(char* filename);
  bool is_exists();
  std::string get_content();
};

#endif /* FILE_HANDLER_H */
