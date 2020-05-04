#ifndef APPLE_H
#define APPLE_H

#include <Arduino.h>

class Apple {
  public:

  // Generates an apple randomly on the map
  Apple(byte maxLineCoordinate, byte maxColumnCoordinate) {
    
    randomSeed(analogRead(0));
    this->lineCoordinate = random(maxLineCoordinate);
    this->columnCoordinate = random(maxColumnCoordinate);

    Serial.print("lineCoordinate: ");
    Serial.print(lineCoordinate);
    Serial.print("\n");

    Serial.print("columnCoordinate: ");
    Serial.print(columnCoordinate);
    Serial.print("\n");
        
    this->lifeStatus = 1; // Apple is built existing
    
  }

  // Sets lifeStatus to 0 as the apple has been eaten
  void getEaten();

  // Get functions
  byte getLineCoordinate();
  byte getColumnCoordinate();
  byte getLifeStatus();

  private:
  byte lineCoordinate;    // Line on which the apple is present
  byte columnCoordinate;  // Column on which the apple is present
  byte lifeStatus;        // Tells if the apple has been eaten or not. 1 for "present on the board", 0 for "eaten and shouldn't appear"
};

#endif
