#ifndef AIRCRAFT_H
#define AIRCRAFT_H

class Aircraft {
  int max_ammo;
  int current_ammos;
public:
  Aircraft();
  int get_ammo();
  void refill(unsigned int&);
};

#endif
