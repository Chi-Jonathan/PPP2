/*
  This file subtracts two the second hex operand from the first hex operand
  @file Sub.cpp
  @author Jonathan Chi
  @version 2.0 2/18/2022
  CS 219
*/
#include "Sub.h"
#include "HexToDec.h"
  /**
   * takes in two hex numbers and turns them to decimal numbers to subtract them, and then puts that into a decimal difference
   * @param hex1 the first hex number taken in as a string
   * @param hex2 the second hex number taken in as a string
   */
Sub::Sub(std::string hex1, std::string hex2){
  uint32_t dec1 = 0;
  uint32_t dec2 = 0;
  HexToDec htd1(hex1);
  dec1 = htd1.getDec();
  HexToDec htd2(hex2);
  dec2 = htd2.getDec();
  dif = dec1 - dec2;
}

//getter for the difference
uint32_t Sub::getDif(){
  return dif;
}