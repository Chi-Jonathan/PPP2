/*
  This file turns the hex numbers to decimal numbers
  @file HexToDec.cpp
  @author Jonathan Chi
  @version 1.0 1/27/2022
  CS 219
*/
#include "HexToDec.h"

  /**
   * takes in a string of a hex number to turn it to a decimal number and sets decNum to that decimal number
   * @param hex the hex number
   */
HexToDec::HexToDec(std::string hex){
  int length = hex.length();
  int base = 1;
  //Loop to take in all the hex characters and turn them and add them to make a decimal number
  for(int count = length; count >= 0; count--){
    if(hex[count] >= 48 && hex[count] <= 57){
      decNum += (hex[count]- 48) * base;
      base*=16;
    }else if(hex[count] >= 65 && hex[count] <= 70){
      decNum += (hex[count] - 55) * base;
      base*=16;
    }
  }
}

//getter for the decimal number
uint32_t HexToDec::getDec(){
  return decNum;
}