#include "ennemy.h"



void Ennemy::automaticallyMoveEnnemy(byte playerLineCoordinate, byte playerColumnCoordinate) {
  // Horizontal distance will be negative if the ennemy is on the left, positive if he's on the right
  int horizontalDistance = playerColumnCoordinate - this->getColumnCoordinate();
  
  // Vertical distance will be negative if the played is above the ennemy, positive if he's under
  int verticalDistance = playerLineCoordinate - this->getLineCoordinate();


  // Checking if it's better to move horizontally or vertically
  // If there's a greater horizontal distance
  if(abs(horizontalDistance) > abs(verticalDistance)) {
    // and if this distance is negative, meaning the player is far on the left
    if(horizontalDistance < 0) {
      this->moveCharacterLeft();
    }

    else if(horizontalDistance > 0) {
      this->moveCharacterRight(6); // TO CHNAGE
    }
  }

  else if(abs(horizontalDistance) <= abs(verticalDistance)) {
    if(verticalDistance < 0) {
      this->moveCharacterUp();
    }
    else if(verticalDistance > 0){
      this->moveCharacterDown(10); // TO CHANGE
    } 
  }
}
