

// We update the physical display of the LED matrix, based on the LEDMatrix
void outputDisplay(Game functionGame) {
  for(byte rowIndex = 0; rowIndex < displayNumberOfRows; rowIndex++) {
    for(byte columnIndex = 0; columnIndex < displayNumberOfColumns; columnIndex++) {
      // Useful because of the way my matrix is soldered.
      // So we'll invert one column every two compared to our digital matrix
      // If we're on an even column, we're fine, everything is straightfoward
      if(columnIndex%2 == 0) {
        
        if(functionGame.LEDMatrix[rowIndex][columnIndex] == Black) {leds[(columnIndex + 1)*displayNumberOfRows - rowIndex - 1] = CRGB::Black;}
        if(functionGame.LEDMatrix[rowIndex][columnIndex] == White) {leds[(columnIndex + 1)*displayNumberOfRows - rowIndex - 1] = CRGB::White;}
        if(functionGame.LEDMatrix[rowIndex][columnIndex] == Green) {leds[(columnIndex + 1)*displayNumberOfRows - rowIndex - 1] = CRGB::Green;}
        if(functionGame.LEDMatrix[rowIndex][columnIndex] == Blue) {leds[(columnIndex + 1)*displayNumberOfRows - rowIndex - 1] = CRGB::Blue;}
        if(functionGame.LEDMatrix[rowIndex][columnIndex] == Red) {leds[(columnIndex + 1)*displayNumberOfRows - rowIndex - 1] = CRGB::Red;}
        if(functionGame.LEDMatrix[rowIndex][columnIndex] == Purple) {leds[(columnIndex + 1)*displayNumberOfRows - rowIndex - 1] = CRGB::Purple;}
      }
      // If we're on an uneven column, we do a mathematical trick to invert it
      else if(columnIndex%2 == 1) {
        if(functionGame.LEDMatrix[rowIndex][columnIndex] == Black) {leds[columnIndex*displayNumberOfRows + rowIndex] = CRGB::Black;}
        if(functionGame.LEDMatrix[rowIndex][columnIndex] == White) {leds[columnIndex*displayNumberOfRows + rowIndex] = CRGB::White;}
        if(functionGame.LEDMatrix[rowIndex][columnIndex] == Green) {leds[columnIndex*displayNumberOfRows + rowIndex] = CRGB::Green;}
        if(functionGame.LEDMatrix[rowIndex][columnIndex] == Blue) {leds[columnIndex*displayNumberOfRows + rowIndex] = CRGB::Blue;}
        if(functionGame.LEDMatrix[rowIndex][columnIndex] == Red) {leds[columnIndex*displayNumberOfRows + rowIndex] = CRGB::Red;}
        if(functionGame.LEDMatrix[rowIndex][columnIndex] == Purple) {leds[columnIndex*displayNumberOfRows + rowIndex] = CRGB::Purple;}
      }
    }
  }
  
  // Display the matrix physically
  FastLED.show(); 
}


// We update the digital display of the LED matrix
void digitalOutputDisplay(Game functionGame) {
  Serial.print("\n We print digitally the current theoritical state of the LED Matrix : \n");
  for (byte i = 0; i < displayNumberOfRows; i++) {
    for (byte j = 0; j < displayNumberOfColumns; j++) {
      Serial.print(functionGame.LEDMatrix[i][j]);
      if (j < displayNumberOfColumns - 1) {
        Serial.print(", ");
      }
      else {
        Serial.print("\n");
      }
    }
  }
}
