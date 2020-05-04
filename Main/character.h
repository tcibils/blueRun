#ifndef CHARACTER_H
#define CHARACTER_H
#include <Arduino.h>

class Character {
  public:
  // Constructor
  Character(byte lineCoordinateInit, byte columnCoordinateInit) {
    this->lineCoordinate = lineCoordinateInit;
    this->columnCoordinate = columnCoordinateInit;
  }

  // Moving functions
  void moveCharacterLeft();
  void moveCharacterRight(byte rightBorderSize);
  void moveCharacterUp();
  void moveCharacterDown(byte downBorderSize);

  // Get functions
  byte getLineCoordinate();
  byte getColumnCoordinate();

  private:
  byte lineCoordinate;
  byte columnCoordinate;
};

#endif
