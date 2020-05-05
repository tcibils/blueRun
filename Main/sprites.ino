void startGameSixTimeTen() {
  const byte PROGMEM startSpriteOne[displayNumberOfRows][displayNumberOfColumns] = {
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 1, 0},
    {0, 0, 1, 0, 0, 0},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 0, 1},
    {2, 0, 1, 0, 0, 1},
    {6, 6, 1, 0, 0, 1},
    {6, 0, 1, 0, 0, 1},
    {0, 6, 1, 0, 0, 1}
  };

  clearLEDMatrix();
  for(byte i = 0; i<displayNumberOfRows; i++) {
    for(byte j = 0; j<displayNumberOfColumns; j++) {
      LEDMatrix[i][j] = startSpriteOne[i][j];
    }
  }
  outputDisplay();
  delay(750);

  const byte PROGMEM startSpriteTwo[displayNumberOfRows][displayNumberOfColumns] = {
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 1, 0},
    {0, 0, 1, 0, 0, 0},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 0, 1},
    {0, 2, 0, 0, 0, 1},
    {6, 6, 6, 0, 0, 1},
    {0, 6, 0, 0, 0, 1},
    {6, 0, 6, 0, 0, 1}
  };

  clearLEDMatrix();
  for(byte i = 0; i<displayNumberOfRows; i++) {
    for(byte j = 0; j<displayNumberOfColumns; j++) {
      LEDMatrix[i][j] = startSpriteTwo[i][j];
    }
  }
  outputDisplay();
  delay(750);

  const byte PROGMEM startSpriteThree[displayNumberOfRows][displayNumberOfColumns] = {
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 1, 0},
    {0, 0, 1, 0, 0, 0},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 2, 0, 0, 1},
    {0, 6, 6, 6, 0, 1},
    {0, 0, 6, 0, 0, 1},
    {0, 6, 0, 6, 0, 1}
  };

  clearLEDMatrix();
  for(byte i = 0; i<displayNumberOfRows; i++) {
    for(byte j = 0; j<displayNumberOfColumns; j++) {
      LEDMatrix[i][j] = startSpriteThree[i][j];
    }
  }
  outputDisplay();
  delay(750);

  const byte PROGMEM startSpriteFour[displayNumberOfRows][displayNumberOfColumns] = {
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 1, 0},
    {0, 0, 1, 0, 0, 0},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 0, 2, 0, 1},
    {0, 0, 6, 6, 6, 1},
    {0, 0, 0, 6, 0, 1},
    {0, 0, 6, 0, 6, 1}
  };

  clearLEDMatrix();
  for(byte i = 0; i<displayNumberOfRows; i++) {
    for(byte j = 0; j<displayNumberOfColumns; j++) {
      LEDMatrix[i][j] = startSpriteFour[i][j];
    }
  }
  outputDisplay();
  delay(750);

  const byte PROGMEM startSpriteFive[displayNumberOfRows][displayNumberOfColumns] = {
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 1, 0},
    {0, 0, 1, 0, 0, 0},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 2, 1},
    {0, 0, 1, 6, 6, 1},
    {0, 0, 1, 0, 6, 1},
    {0, 0, 1, 6, 0, 1}
  };

  clearLEDMatrix();
  for(byte i = 0; i<displayNumberOfRows; i++) {
    for(byte j = 0; j<displayNumberOfColumns; j++) {
      LEDMatrix[i][j] = startSpriteFive[i][j];
    }
  }
  outputDisplay();
  delay(750);

  const byte PROGMEM startSpriteSix[displayNumberOfRows][displayNumberOfColumns] = {
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 1, 0},
    {0, 0, 1, 0, 0, 0},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 6, 1},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 6, 1}
  };

  clearLEDMatrix();
  for(byte i = 0; i<displayNumberOfRows; i++) {
    for(byte j = 0; j<displayNumberOfColumns; j++) {
      LEDMatrix[i][j] = startSpriteSix[i][j];
    }
  }
  outputDisplay();
  delay(750);

  const byte PROGMEM startSpriteSeven[displayNumberOfRows][displayNumberOfColumns] = {
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 1, 0},
    {0, 0, 1, 0, 0, 0},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 0, 1}
  };

  clearLEDMatrix();
  for(byte i = 0; i<displayNumberOfRows; i++) {
    for(byte j = 0; j<displayNumberOfColumns; j++) {
      LEDMatrix[i][j] = startSpriteSeven[i][j];
    }
  }
  outputDisplay();
  delay(1250);
}

void gameOverSixTimeTen() {
  
  const byte PROGMEM spriteOne[displayNumberOfRows][displayNumberOfColumns] = {
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0}
  };

  clearLEDMatrix();
  for(byte i = 0; i<displayNumberOfRows; i++) {
    for(byte j = 0; j<displayNumberOfColumns; j++) {
      LEDMatrix[i][j] = spriteOne[i][j];
    }
  }
  outputDisplay();
  delay(1000);

  const byte PROGMEM spriteTwo[displayNumberOfRows][displayNumberOfColumns] = {
    {3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 0, 0, 0, 0},
    {3, 3, 0, 0, 2, 0},
    {3, 3, 0, 6, 6, 6},
    {3, 3, 0, 0, 6, 0},
    {3, 3, 0, 6, 0, 6},
    {3, 3, 0, 0, 0, 0},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3}
  };

  clearLEDMatrix();
  for(byte i = 0; i<displayNumberOfRows; i++) {
    for(byte j = 0; j<displayNumberOfColumns; j++) {
      LEDMatrix[i][j] = spriteTwo[i][j];
    }
  }
  outputDisplay();
  delay(1500);

    const byte PROGMEM spriteThree[displayNumberOfRows][displayNumberOfColumns] = {
    {0, 0, 0, 0, 0, 0},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 0, 0, 2, 0},
    {3, 3, 0, 6, 6, 6},
    {3, 3, 0, 0, 6, 0},
    {3, 3, 0, 6, 0, 6},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3},
    {0, 0, 0, 0, 0, 0}
  };

  clearLEDMatrix();
  for(byte i = 0; i<displayNumberOfRows; i++) {
    for(byte j = 0; j<displayNumberOfColumns; j++) {
      LEDMatrix[i][j] = spriteThree[i][j];
    }
  }
  outputDisplay();
  delay(500);

  const byte PROGMEM spriteFour[displayNumberOfRows][displayNumberOfColumns] = {
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 0, 6, 6, 6},
    {3, 3, 0, 0, 6, 0},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0}
  };

  clearLEDMatrix();
  for(byte i = 0; i<displayNumberOfRows; i++) {
    for(byte j = 0; j<displayNumberOfColumns; j++) {
      LEDMatrix[i][j] = spriteFour[i][j];
    }
  }
  outputDisplay();
  delay(500);

  const byte PROGMEM spriteFive[displayNumberOfRows][displayNumberOfColumns] = {
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0}
  };

  clearLEDMatrix();
  for(byte i = 0; i<displayNumberOfRows; i++) {
    for(byte j = 0; j<displayNumberOfColumns; j++) {
      LEDMatrix[i][j] = spriteFive[i][j];
    }
  }
  outputDisplay();
  delay(2250);

    const byte PROGMEM spriteSix[displayNumberOfRows][displayNumberOfColumns] = {
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 0, 0, 0, 0},
    {3, 3, 0, 0, 0, 0},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0}
  };

  clearLEDMatrix();
  for(byte i = 0; i<displayNumberOfRows; i++) {
    for(byte j = 0; j<displayNumberOfColumns; j++) {
      LEDMatrix[i][j] = spriteSix[i][j];
    }
  }
  outputDisplay();
  delay(500);

      const byte PROGMEM spriteSeven[displayNumberOfRows][displayNumberOfColumns] = {
    {0, 0, 0, 0, 0, 0},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 0, 0, 0, 0},
    {3, 3, 0, 0, 0, 0},
    {3, 3, 0, 0, 0, 0},
    {3, 3, 0, 0, 0, 0},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3},
    {0, 0, 0, 0, 0, 0}
  };

  clearLEDMatrix();
  for(byte i = 0; i<displayNumberOfRows; i++) {
    for(byte j = 0; j<displayNumberOfColumns; j++) {
      LEDMatrix[i][j] = spriteSeven[i][j];
    }
  }
  outputDisplay();
  delay(2500);
}
