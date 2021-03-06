// ----------- Moving Functions -----------------

void movePlayerLeft() {
  // We don't want the player getting outside of the frame
  if(playerPosition.columnCoordinate > 0){
    byte temp = playerPosition.columnCoordinate;
    playerPosition.columnCoordinate = temp - 1;    
  }
}

void movePlayerRight() {
  // We don't want the player getting outside of the frame
  if(playerPosition.columnCoordinate < displayNumberOfColumns-1){
    byte temp = playerPosition.columnCoordinate;
    playerPosition.columnCoordinate = temp + 1;
  }
}

void movePlayerUp() {
  // We don't want the player getting outside of the frame
  if(playerPosition.lineCoordinate > 0){
    byte temp = playerPosition.lineCoordinate;
    playerPosition.lineCoordinate = temp - 1;  
  }
}

void movePlayerDown() {
  // We don't want the player getting outside of the frame
  if(playerPosition.lineCoordinate < displayNumberOfRows   - 1){
    byte temp = playerPosition.lineCoordinate;
    playerPosition.lineCoordinate = temp + 1;    
  }
}
