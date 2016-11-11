#ifndef SPACEX_H
#define SPACEX_H

#include <string>
#include "rocket.hpp"

class SpaceX {
private:
  unsigned int fuel;
  Rocket** rockets;
  unsigned int rocket_count;
public:
  SpaceX(unsigned int fuel);
  std::string get_stats();
  void add_rocket(Rocket& rocket);
  unsigned int get_all_launches();
};

#endif /* SPACEX_H */
