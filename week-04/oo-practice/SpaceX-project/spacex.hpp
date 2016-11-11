#ifndef SPACEX_H
#define SPACEX_H

#include <string>
#include "rocket.hpp"
#include "rocket-vector.hpp"

class SpaceX {
private:
  unsigned int fuel;
  RocketVector rockets;
  unsigned int rocket_count;
public:
  SpaceX(unsigned int fuel);
  std::string get_stats();
  void add_rocket(Rocket& rocket);
  unsigned int get_all_launches();
  std::string get_all_rocket_stats();
  void refill_by_id(unsigned int id);
  void launch_by_id(unsigned int id);
  Rocket& get_rocket_by_id(unsigned int id);
};

#endif /* SPACEX_H */
