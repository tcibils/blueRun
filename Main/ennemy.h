#ifndef ENNEMY_H
#define ENNEMY_H
#include <Arduino.h>

#include "character.h"

class Ennemy : public Character {
  public:
  Ennemy(byte lineCoordinateInit, byte columnCoordinateInit) : Character(lineCoordinateInit, columnCoordinateInit) {};  
  
  void automaticallyMoveEnnemy(byte playerLineCoordinate, byte playerColumnCoordinate);

  private:
  
};

#endif
