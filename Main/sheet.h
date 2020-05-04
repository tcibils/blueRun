#ifndef SHEET_H
#define SHEET_H

#include <Arduino.h>

class Sheet {
  public:


  // Get functions
  byte getLineCoordinate();
  byte getColumnCoordinate();

  private:
  byte lineCoordinate;
  byte columnCoordinate;
};

#endif
