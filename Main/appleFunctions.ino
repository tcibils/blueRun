void appleGeneration() {
  randomSeed(analogRead(A0));

  bool appleFarFromPlayer = false;

  // While the apple is seeded too near to the player, we re-generate one.
  while(!appleFarFromPlayer) {
    byte rowPosition = random(displayNumberOfRows);
    byte columnPosition = random(displayNumberOfColumns);
    if(rowPosition > playerPosition.lineCoordinate || playerPosition.lineCoordinate < rowPosition) {
      if(columnPosition < playerPosition.columCoordinate || playerPosition.columCoordinate > playerPosition) {
        appleFarFromPlayer = true;
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
  
  applePosition = {rowPosition, columnPosition};
  applePresence = 1;
}
