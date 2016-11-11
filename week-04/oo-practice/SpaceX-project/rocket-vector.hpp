#ifndef ROCKET_VECTOR_H
#define ROCKET_VECTOR_H

#include "rocket.hpp"

class RocketVector {
private:
  Rocket** rockets;
  unsigned int rocket_count;
public:
  RocketVector();
  ~RocketVector();
  const unsigned int get_size();
  void push_back(Rocket& rocket);
  Rocket& at(unsigned int index);
  Rocket& get_rocket_by_id(unsigned int id);
};

#endif /* ROCKET_VECTOR_H */
