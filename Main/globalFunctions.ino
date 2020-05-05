void checkIfSheetIsEaten() {
  // If the player is over the sheet
  if(playerPosition.lineCoordinate == sheetPosition.lineCoordinate) {
    if(playerPosition.columnCoordinate == sheetPosition.columnCoordinate) {
      // The sheet disapears
      sheetPresence = 0;

      // The game goes up by one level...
      upgradeGameLevel();
    }
  }
}

void checkIfPlayerIsDead() {
  // If the ennemy is present
  if(ennemyPresence == 1) {
  // If the ennemy is over the player
    if(playerPosition.lineCoordinate == ennemyPosition.lineCoordinate) {
      if(playerPosition.columnCoordinate == ennemyPosition.columnCoordinate) {
        gameStatus = 9;
      }
    }
  }
}

void upgradeGameLevel() {
  gameStatus++;
  ennemySpeed = ennemySpeed-150;
}

void resetGame() {
  gameStatus = initialGameStatus;           // Start again at level 0
  ennemyPresence = initialEnnemyPresence;   // Ennemy shouldn't be present
  ennemySpeed = initialEnnemySpeed;         // and should be slow
  
  // kinda hardcoding position reinitialization for now
  playerPosition = playerIntialPosition;
  ennemyPosition = ennemyInitialPosition;

  // Play game reset
  startGameSixTimeTen();
}
