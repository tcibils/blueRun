#ifndef GAME_H
#define GAME_H
#include <Arduino.h>

#include "character.h"
#include "player.h"
#include "ennemy.h"
#include "sheet.h"

// --------------- Display parameters ----------------------------------------
// LED MATRIX CODE
#define displayNumberOfRows 10                          // Number of rows
#define displayNumberOfColumns 6                       // Number of coumns
#define NUM_LEDS displayNumberOfRows * displayNumberOfColumns // Number of LEDs

// --------------- Game parameters -------------------------------------------

class Game {
  public:

  // Constructor
  Game() : player(1,1), ennemy(2,2){    
  }

  void movePlayerUp();
  void movePlayerDown();
  void movePlayerLeft();
  void movePlayerRight();

  void moveEnnemyAuto();

  void clearLEDMatrix();
  void updateLEDMatrix();
  
  // LED Matrix
  // top column is from 0 to 7, bottom one from 56 to 63 (for a 8x8 matrix)
  byte LEDMatrix[displayNumberOfRows][displayNumberOfColumns];
  

  private:
  Player player;
  Ennemy ennemy;
  
};

#endif
