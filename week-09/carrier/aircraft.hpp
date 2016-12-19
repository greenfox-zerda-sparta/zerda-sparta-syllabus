#ifndef AIRCRAFT_H
#define AIRCRAFT_H

class Aircraft {
private:
  unsigned int current_ammo;
  unsigned int max_ammo;
public:
  Aircraft(unsigned int _max_ammo);
  unsigned int get_current_ammo();
  void refill(unsigned int& store);
};

#endif
