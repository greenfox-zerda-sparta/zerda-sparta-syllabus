#include "rocket-vector.hpp"

RocketVector::RocketVector() {
  rockets = NULL;
  rocket_count = 0;
}

RocketVector::~RocketVector() {
  if (rockets != NULL) {
    delete[] rockets;
    rockets = NULL;
  }
}

void RocketVector::push_back(Rocket& rocket) {
  Rocket** temp = new Rocket*[rocket_count + 1];
  if (rockets != NULL) {
    for (int i = 0; i < rocket_count; ++i) {
      temp[i] = rockets[i];
    }
  }
  temp[rocket_count] = &rocket;
  delete[] rockets;
  rockets = temp;
  ++rocket_count;
}

Rocket& RocketVector::at(unsigned int index) {
  return *(rockets[index]);
}

Rocket& RocketVector::get_rocket_by_id(unsigned int id) {
  for (int i = 0; i < rocket_count; ++i) {
    if (rockets[i]->get_id() == id) {
      return *rockets[i];
    }
  }
}

const unsigned int RocketVector::get_size() {
  return rocket_count;
}
