/* 
 *  Creator : Thomas Cibils
 *  FastLED tuto : https://github.com/FastLED/FastLED/wiki/Basic-usage - used for WS2812B 5050 RGB LED Strip 5M 150 300 Leds 144 60LED/M Individual Addressable 5V
 *  */

#include <TimerOne.h>
#include "FastLED.h"
#include <avr/pgmspace.h>

// LED MATRIX CODE
#define displayNumberOfRows 10                          // Number of rows
#define displayNumberOfColumns 6                       // Number of coumns
#define NUM_LEDS displayNumberOfRows * displayNumberOfColumns // Number of LEDs

CRGB leds[NUM_LEDS];                                          // Defining leds table for FastLed
#define DATA_PIN 6                                            // Output pin for FastLed

// LED Matrix
// top column is from 0 to 7, bottom one from 56 to 63 (for a 8x8 matrix)
byte LEDMatrix[displayNumberOfRows][displayNumberOfColumns];


// Original colours for leds.
const byte Black = 0;
const byte White = 1;
const byte Blue = 2;
const byte Red = 3;
const byte Green = 4;
const byte Purple = 5;


// Pin used from the arduino
#define leftButton A5        // Input pin for button Left
#define upButton A4          // Input pin for button Up
#define rightButton A3       // Input pin for button Right
#define downButton A2        // Input pin for button Down
#define aButton A0           // Input pin for button A
#define bButton A1           // Input pin for button B


struct pointOnMatrix {
  byte lineCoordinate;
  byte columnCoordinate;
};

unsigned long lastMillis = 0;
unsigned const int growthSpeed = 1500;  // In miliseconds, every how much will the menace grow

unsigned int leftButtonValue = LOW;
unsigned int rightButtonValue = LOW;
unsigned int upButtonValue = LOW;
unsigned int downButtonValue = LOW;

unsigned int lastLeftButtonValue = LOW;
unsigned int lastRightButtonValue = LOW;
unsigned int lastUpButtonValue = LOW;
unsigned int lastDownButtonValue = LOW;


// ---------------- Game Parameters ------------------

pointOnMatrix playerIntialPosition = {1,1};         // Initial position of the player
pointOnMatrix ennemyInitialPosition = {5,5};        // Initial position of the ennemy
byte initialSheetPresence = 0;                      // If an sheet is present straight away at the game start. 1 for yes, 0 for no.
byte initialGameStatus = 0;                         // Phase of the game the player is starting at. 9 means game over
byte initialEnnemyPresence = 0;                     // Is the ennemy present when the game start?
int initialEnnemySpeed = 1200;                       // Ennemy speed - it moves every X miliseconds.


// ---------------- Game Variables -------------------
// -------------- Do not touch that ------------------

pointOnMatrix playerPosition = playerIntialPosition;
pointOnMatrix ennemyPosition = ennemyInitialPosition;
byte sheetPresence = initialSheetPresence;            // 1 if an sheet is present, 0 if no.
byte gameStatus = initialGameStatus;                  // keeps track of the various game phases.
pointOnMatrix sheetPosition = {0,0};                  // sheet position on the map.
byte ennemyPresence = initialEnnemyPresence;          // Indicates if the ennemy is present. 1 for yes, 0 for no.
int ennemySpeed = initialEnnemySpeed;                 // Indicated the ennemy speed - it moves every X miliseconds.

void setup() {

  Serial.begin(9600);

  // Set matrix pins to output
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);

  // Set button pins to input
  pinMode(leftButton, INPUT);
  pinMode(upButton, INPUT);
  pinMode(downButton, INPUT);
  pinMode(rightButton, INPUT);
  pinMode(aButton, INPUT);
  pinMode(bButton, INPUT);

  startGameSixTimeTen();
}

void loop() {
  
    if(millis() - lastMillis > ennemySpeed) {
      // If the ennemy has appeared
      if(ennemyPresence == 1) {
        // He moves...
        automaticallyMoveEnnemy();
      }
      lastMillis = millis();
    }


  
      // ----------------------------------------------------------
      // Checking if a button has been pushed, reacting accordingly
      // ----------------------------------------------------------
      
      leftButtonValue = analogRead(leftButton);
      if (leftButtonValue < 200 && lastLeftButtonValue > 800) {
        movePlayerLeft();
      }
      lastLeftButtonValue = leftButtonValue; // And we update what we read just after
  
      upButtonValue = analogRead(upButton);
      if (upButtonValue < 200 && lastUpButtonValue > 800) { 
        movePlayerUp();
      }
      lastUpButtonValue = upButtonValue; // And we update what we read just after
  
      rightButtonValue = analogRead(rightButton);
      if (rightButtonValue < 200 && lastRightButtonValue > 800) { 
        movePlayerRight();
      }
      lastRightButtonValue = rightButtonValue; // And we update what we read just after
  
      downButtonValue = analogRead(downButton);
      if (downButtonValue < 200 && lastDownButtonValue > 800) { 
        movePlayerDown();
      }
      lastDownButtonValue = downButtonValue; // And we update what we read just after

    // If the player took the first sheet, the ennemy appears
    if(gameStatus == 1 && ennemyPresence == 0) {
      ennemyPresence = 1;
    }
    
    if(gameStatus < 9) {
      if(sheetPresence == 0) {
        sheetGeneration();
      }
      checkIfSheetIsEaten();
      checkIfPlayerIsDead();
    }

    if(gameStatus == 9) {
      gameOverSixTimeTen(); // Displays the game over
      resetGame();          // Restarting the game
    }
  
  updateLEDMatrix();
  outputDisplay();
  delay(1);
}
