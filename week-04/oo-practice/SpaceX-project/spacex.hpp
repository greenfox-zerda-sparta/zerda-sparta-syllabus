#ifndef SPACEX_H
#define SPACEX_H

#include <string>
#include "rocket.hpp"

class SpaceX {
private:
  unsigned int fuel;
  Rocket* rockets;
  unsigned int rocket_count;
public:
  SpaceX(unsigned int fuel);
  std::string get_stats() const;
  void add_rocket(Rocket& rocket);
};

#endif /* SPACEX_H */
