void appleGeneration() {
  randomSeed(analogRead(0));
  byte rowPosition = random(displayNumberOfRows);
  byte columnPosition = random(displayNumberOfColumns);

  Serial.print("rowPosition: ");
  Serial.print(rowPosition);
  Serial.print("\n");

    Serial.print("columnPosition: ");
  Serial.print(columnPosition);
  Serial.print("\n");
  Serial.print("\n");
  
  applePosition = {rowPosition, columnPosition};
  applePresence = 1;
}
