
#include <avr/pgmspace.h> 

void startGameSixTimeTen() {
  static const byte startSpriteOne[displayNumberOfRows][displayNumberOfColumns] PROGMEM = {
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 1, 0},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 0, 1},
    {2, 0, 1, 0, 0, 1},
    {2, 2, 1, 0, 0, 1},
    {2, 0, 1, 0, 0, 1},
    {0, 2, 1, 0, 0, 1}
  };
  

  clearLEDMatrix();
  for(byte i = 0; i<displayNumberOfRows; i++) {
    for(byte j = 0; j<displayNumberOfColumns; j++) {
      LEDMatrix[i][j] = pgm_read_byte(&(startSpriteOne[i][j]));
    }
  }
  outputDisplay();
  delay(750);

  static const byte startSpriteTwo[displayNumberOfRows][displayNumberOfColumns] PROGMEM = {
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 1, 0},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 0, 1},
    {0, 2, 0, 0, 0, 1},
    {2, 2, 2, 0, 0, 1},
    {0, 2, 0, 0, 0, 1},
    {2, 0, 2, 0, 0, 1}
  };

  clearLEDMatrix();
  for(byte i = 0; i<displayNumberOfRows; i++) {
    for(byte j = 0; j<displayNumberOfColumns; j++) {
      LEDMatrix[i][j] = pgm_read_byte(&(startSpriteTwo[i][j]));
    }
  }
  outputDisplay();
  delay(750);

  static const PROGMEM byte startSpriteThree[displayNumberOfRows][displayNumberOfColumns] = {
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 1, 0},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 2, 0, 0, 1},
    {0, 2, 2, 2, 0, 1},
    {0, 0, 2, 0, 0, 1},
    {0, 2, 0, 2, 0, 1}
  };

  clearLEDMatrix();
  for(byte i = 0; i<displayNumberOfRows; i++) {
    for(byte j = 0; j<displayNumberOfColumns; j++) {
      LEDMatrix[i][j] = pgm_read_byte(&(startSpriteThree[i][j]));
    }
  }
  outputDisplay();
  delay(750);

  static const PROGMEM byte startSpriteFour[displayNumberOfRows][displayNumberOfColumns] = {
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 1, 0},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 0, 2, 0, 1},
    {0, 0, 2, 2, 2, 1},
    {0, 0, 0, 2, 0, 1},
    {0, 0, 2, 0, 2, 1}
  };

  clearLEDMatrix();
  for(byte i = 0; i<displayNumberOfRows; i++) {
    for(byte j = 0; j<displayNumberOfColumns; j++) {
      LEDMatrix[i][j] = pgm_read_byte(&(startSpriteFour[i][j]));
    }
  }
  outputDisplay();
  delay(750);

  static const PROGMEM byte startSpriteFive[displayNumberOfRows][displayNumberOfColumns] = {
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 1, 0},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 2, 1},
    {0, 0, 1, 2, 2, 1},
    {0, 0, 1, 0, 2, 1},
    {0, 0, 1, 2, 0, 1}
  };

  clearLEDMatrix();
  for(byte i = 0; i<displayNumberOfRows; i++) {
    for(byte j = 0; j<displayNumberOfColumns; j++) {
      LEDMatrix[i][j] = pgm_read_byte(&(startSpriteFive[i][j]));
    }
  }
  outputDisplay();
  delay(750);

  static const PROGMEM byte startSpriteSix[displayNumberOfRows][displayNumberOfColumns] = {
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 1, 0},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 2, 1},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 2, 1}
  };

  clearLEDMatrix();
  for(byte i = 0; i<displayNumberOfRows; i++) {
    for(byte j = 0; j<displayNumberOfColumns; j++) {
      LEDMatrix[i][j] = pgm_read_byte(&(startSpriteSix[i][j]));
    }
  }
  outputDisplay();
  delay(750);

  static const PROGMEM byte startSpriteSeven[displayNumberOfRows][displayNumberOfColumns] = {
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 1, 0},
    {0, 0, 1, 0, 0, 1},
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
      LEDMatrix[i][j] = pgm_read_byte(&(startSpriteSeven[i][j]));
    }
  }
  outputDisplay();
  delay(1250);
}

void gameOverSixTimeTen() {
  
  static const PROGMEM byte spriteOne[displayNumberOfRows][displayNumberOfColumns] = {
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
      LEDMatrix[i][j] = pgm_read_byte(&(spriteOne[i][j]));
    }
  }
  outputDisplay();
  delay(1000);

  static const PROGMEM byte spriteTwo[displayNumberOfRows][displayNumberOfColumns] = {
    {3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 0, 0, 0, 0},
    {3, 3, 0, 0, 2, 0},
    {3, 3, 0, 2, 2, 2},
    {3, 3, 0, 0, 2, 0},
    {3, 3, 0, 2, 0, 2},
    {3, 3, 0, 0, 0, 0},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3}
  };

  clearLEDMatrix();
  for(byte i = 0; i<displayNumberOfRows; i++) {
    for(byte j = 0; j<displayNumberOfColumns; j++) {
      LEDMatrix[i][j] = pgm_read_byte(&(spriteTwo[i][j]));
    }
  }
  outputDisplay();
  delay(1500);

    static const PROGMEM byte spriteThree[displayNumberOfRows][displayNumberOfColumns] = {
    {0, 0, 0, 0, 0, 0},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 0, 0, 2, 0},
    {3, 3, 0, 2, 2, 2},
    {3, 3, 0, 0, 2, 0},
    {3, 3, 0, 2, 0, 2},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3},
    {0, 0, 0, 0, 0, 0}
  };

  clearLEDMatrix();
  for(byte i = 0; i<displayNumberOfRows; i++) {
    for(byte j = 0; j<displayNumberOfColumns; j++) {
      LEDMatrix[i][j] = pgm_read_byte(&(spriteThree[i][j]));
    }
  }
  outputDisplay();
  delay(500);

  static const PROGMEM byte spriteFour[displayNumberOfRows][displayNumberOfColumns] = {
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 0, 2, 2, 2},
    {3, 3, 0, 0, 2, 0},
    {3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0}
  };

  clearLEDMatrix();
  for(byte i = 0; i<displayNumberOfRows; i++) {
    for(byte j = 0; j<displayNumberOfColumns; j++) {
      LEDMatrix[i][j] = pgm_read_byte(&(spriteFour[i][j]));
    }
  }
  outputDisplay();
  delay(500);

  static const PROGMEM byte spriteFive[displayNumberOfRows][displayNumberOfColumns] = {
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
      LEDMatrix[i][j] = pgm_read_byte(&(spriteFive[i][j]));
    }
  }
  outputDisplay();
  delay(2250);

    static const PROGMEM byte spriteSix[displayNumberOfRows][displayNumberOfColumns] = {
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
      LEDMatrix[i][j] = pgm_read_byte(&(spriteSix[i][j]));
    }
  }
  outputDisplay();
  delay(500);

      static const PROGMEM byte spriteSeven[displayNumberOfRows][displayNumberOfColumns] = {
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
      LEDMatrix[i][j] = pgm_read_byte(&(spriteSeven[i][j]));
    }
  }
  outputDisplay();
  delay(2500);
}
