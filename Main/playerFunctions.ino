void setPlayerPositionInMatrix() {
  LEDMatrix[playerPosition.lineCoordinate][playerPosition.columnCoordinate] = Blue;
}


// ----------- Moving Functions -----------------

void movePlayerLeft() {
  // We don't want the player getting outside of the frame
  if(playerPosition.columnCoordinate > 0){
    LEDMatrix[playerPosition.lineCoordinate][playerPosition.columnCoordinate] = Black;
    byte temp = playerPosition.columnCoordinate;
    playerPosition.columnCoordinate = temp - 1;    
    LEDMatrix[playerPosition.lineCoordinate][playerPosition.columnCoordinate] = Blue;
  }
}

void movePlayerRight() {
  // We don't want the player getting outside of the frame
  if(playerPosition.columnCoordinate < displayNumberOfColumns-1){
    LEDMatrix[playerPosition.lineCoordinate][playerPosition.columnCoordinate] = Black;
    byte temp = playerPosition.columnCoordinate;
    playerPosition.columnCoordinate = temp + 1;
    LEDMatrix[playerPosition.lineCoordinate][playerPosition.columnCoordinate] = Blue; 
  }
}

void movePlayerUp() {
  // We don't want the player getting outside of the frame
  if(playerPosition.lineCoordinate > 0){
    LEDMatrix[playerPosition.lineCoordinate][playerPosition.columnCoordinate] = Black;
    byte temp = playerPosition.lineCoordinate;
    playerPosition.lineCoordinate = temp - 1;  
    LEDMatrix[playerPosition.lineCoordinate][playerPosition.columnCoordinate] = Blue;  
  }
}

void movePlayerDown() {
  // We don't want the player getting outside of the frame
  if(playerPosition.lineCoordinate < displayNumberOfRows   - 1){
    LEDMatrix[playerPosition.lineCoordinate][playerPosition.columnCoordinate] = Black;
    byte temp = playerPosition.lineCoordinate;
    playerPosition.lineCoordinate = temp + 1;    
    LEDMatrix[playerPosition.lineCoordinate][playerPosition.columnCoordinate] = Blue;
  }
}
