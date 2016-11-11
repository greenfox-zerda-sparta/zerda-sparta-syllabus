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
  std::string type_name;
public:
  Rocket(unsigned int fuel_level);
  const unsigned int get_id() const;
  void launch();
  std::string get_stats() const;
};

#endif /* ROCKET_H */
