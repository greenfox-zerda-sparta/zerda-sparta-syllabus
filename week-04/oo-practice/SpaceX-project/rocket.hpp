#ifndef ROCKET_H
#define ROCKET_H

#include <string>

class Rocket {
private:
  unsigned int id;
  unsigned int fuel_level;
  unsigned int launches;
protected:
  std::string type_name;
public:
  Rocket(unsigned int fuel_level);
  const unsigned int get_id() const;
  std::string get_stats();
};

#endif /* ROCKET_H */
