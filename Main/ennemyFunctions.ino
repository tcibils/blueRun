void automaticallyMoveEnnemy() {

  
  
  // Horizontal distance will be negative if the ennemy is on the left, positive if he's on the right
  int horizontalDistance = playerPosition.columnCoordinate - ennemyPosition.columnCoordinate;
  
  // Vertical distance will be negative if the played is above the ennemy, positive if he's under
  int verticalDistance = playerPosition.lineCoordinate - ennemyPosition.lineCoordinate;


  // Checking if it's better to move horizontally or vertically
  // If there's a greater horizontal distance
  if(abs(horizontalDistance) > abs(verticalDistance)) {
    // and if this distance is negative, meaning the player is far on the left
    if(horizontalDistance < 0) {
      moveEnnemyLeft();
    }

    else if(horizontalDistance > 0) {
      moveEnnemyRight();
    }
  }

  else if(abs(horizontalDistance) <= abs(verticalDistance)) {
    if(verticalDistance < 0) {
      moveEnnemyUp();
    }
    else if(verticalDistance > 0){
      moveEnnemyDown();
    } 
  }
}

void moveEnnemyLeft() {
  // We don't want the player getting outside of the frame
  if(ennemyPosition.columnCoordinate > 0){
    byte temp = ennemyPosition.columnCoordinate;
    ennemyPosition.columnCoordinate = temp - 1;    
  }
}

void moveEnnemyRight() {
  // We don't want the player getting outside of the frame
  if(ennemyPosition.columnCoordinate < displayNumberOfColumns-1){
    byte temp = ennemyPosition.columnCoordinate;
    ennemyPosition.columnCoordinate = temp + 1;
  }
}

void moveEnnemyUp() {
  // We don't want the player getting outside of the frame
  if(ennemyPosition.lineCoordinate > 0){
    byte temp = ennemyPosition.lineCoordinate;
    ennemyPosition.lineCoordinate = temp - 1;  
  }
}

void moveEnnemyDown() {
  // We don't want the player getting outside of the frame
  if(ennemyPosition.lineCoordinate < displayNumberOfRows   - 1){
    byte temp = ennemyPosition.lineCoordinate;
    ennemyPosition.lineCoordinate = temp + 1;    
  }
}
