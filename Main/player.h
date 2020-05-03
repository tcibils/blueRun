#include <Arduino.h>

#ifndef PLAYER_H
#define PLAYER_H

#include "character.h"

class Player : public Character {
  public:
  Player(byte lineCoordinateInit, byte columnCoordinateInit) : Character(lineCoordinateInit, columnCoordinateInit) {};

  private:
};

#endif
