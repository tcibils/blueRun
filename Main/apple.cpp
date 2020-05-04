#include "apple.h"

void Apple::getEaten() {
  this->lifeStatus = 0;
}


// ---------- Getters -------------

byte Apple::getLineCoordinate() {
  return this->lineCoordinate;
}

byte Apple::getColumnCoordinate() {
  return this->columnCoordinate;
}

byte Apple::getLifeStatus() {
  return this->lifeStatus;
}
