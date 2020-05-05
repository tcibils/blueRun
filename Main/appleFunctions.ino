void sheetGeneration() {
  
  randomSeed(analogRead(A0));

  bool sheetFarFromPlayer = false;
  byte rowPosition = random(displayNumberOfRows);
  byte columnPosition = random(displayNumberOfColumns);

  // While the sheet is seeded too near to the player, we re-generate one.
  while(!sheetFarFromPlayer) {
    rowPosition = random(displayNumberOfRows);
    columnPosition = random(displayNumberOfColumns);
    if(rowPosition < playerPosition.lineCoordinate || rowPosition > playerPosition.lineCoordinate) {
      if(columnPosition < playerPosition.columnCoordinate || columnPosition > playerPosition.columnCoordinate) {
        sheetFarFromPlayer = true;
      }
    } 
   }
   
  /*
  Serial.print("rowPosition: ");
  Serial.print(rowPosition);
  Serial.print("\n");

    Serial.print("columnPosition: ");
  Serial.print(columnPosition);
  Serial.print("\n");
  Serial.print("\n");
  */
  
  sheetPosition = {rowPosition, columnPosition};
  sheetPresence = 1;
}
