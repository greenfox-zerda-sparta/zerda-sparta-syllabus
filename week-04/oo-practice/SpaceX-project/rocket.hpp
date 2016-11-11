#ifndef ROCKET_H
#define ROCKET_H

#include <string>

class Rocket {
private:
  unsigned int id;
  unsigned int fuel_level;
  unsigned int launches;
protected:
  unsigned int fuel_consumption;
  unsigned int tank_size;
  std::string type_name;
public:
  Rocket();
  const unsigned int get_id() const;
  void launch();
  const unsigned int refill();
  std::string get_stats() const;
};

#endif /* ROCKET_H */
