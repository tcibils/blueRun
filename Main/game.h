#include <Arduino.h>

#ifndef GAME_H
#define GAME_H

#include "character.h"
#include "player.h"
#include "ennemy.h"



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
  byte LEDMatrix[10][6];
  

  private:
  Player player;
  Ennemy ennemy;
  
};

#endif
