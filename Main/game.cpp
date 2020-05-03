#include "game.h"


  void Game::movePlayerUp() {
    this->player.moveCharacterUp();
  }
  
  void Game::movePlayerDown() {
    this->player.moveCharacterDown(10);
  }
  
  void Game::movePlayerLeft() {
    this->player.moveCharacterLeft();  
  }
  
  void Game::movePlayerRight() {
    this->player.moveCharacterRight(6);
  }

  void Game::moveEnnemyAuto() {
    this->ennemy.automaticallyMoveEnnemy(this->player.getLineCoordinate(), this->player.getColumnCoordinate());
  }


  // Makes the whole "LEDMatrix" equals to 0, i.e. each LED is off
void Game::clearLEDMatrix() {
  // Just seting le LEDmatrix to Wall
  for (byte i = 0; i < 10; i++)  {
    for (byte j = 0; j < 6; j++) {
      this->LEDMatrix[i][j] = 0;
    }
  }
}

// Updates the in-memory LED Matrix depending on various object positions and game status
void Game::updateLEDMatrix() {
  // Clear the board
  this->clearLEDMatrix();

  // Place the player
  LEDMatrix[this->player.getLineCoordinate()][this->player.getColumnCoordinate()] = 2;

  // Place the ennemy
  LEDMatrix[this->ennemy.getLineCoordinate()][this->ennemy.getColumnCoordinate()] = 3;
 
}
