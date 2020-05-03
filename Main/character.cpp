#include "character.h"

// ----------- Moving Functions -----------------

void Character::moveCharacterLeft() {
  // We don't want the player getting outside of the frame
  if(this->columnCoordinate > 0){
    byte temp = this->columnCoordinate;
    this->columnCoordinate = temp - 1;    
  }
}

void Character::moveCharacterRight(byte rightBorderSize) {
  // We don't want the player getting outside of the frame
  if(this->columnCoordinate < rightBorderSize-1){
    byte temp = this->columnCoordinate;
    this->columnCoordinate = temp + 1;
  }
}

void Character::moveCharacterUp() {
  // We don't want the player getting outside of the frame
  if(this->lineCoordinate > 0){
    byte temp = this->lineCoordinate;
    this->lineCoordinate = temp - 1;  
  }
}

void Character::moveCharacterDown(byte downBorderSize) {
  // We don't want the player getting outside of the frame
  if(this->lineCoordinate < downBorderSize   - 1){
    byte temp = this->lineCoordinate;
    this->lineCoordinate = temp + 1;    
  }
}

// ---------- Getters -------------

byte Character::getLineCoordinate() {
  return this->lineCoordinate;
}

byte Character::getColumnCoordinate() {
  return this->columnCoordinate;
}
