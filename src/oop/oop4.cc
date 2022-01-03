#include "oop4.h"
#include <bits/stdc++.h>
#include <chrono>
using namespace std;


CarId::CarId(int carId) : carId(carId) {}

bool CarId::operator==(const CarId &other) const {
  return carId == other.carId;
}


SpaceId::SpaceId(int spaceId) : spaceId(spaceId) {}

bool SpaceId::operator==(const SpaceId &other) const {
  return spaceId == other.spaceId;
}
  
