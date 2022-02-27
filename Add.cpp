/*
  This file adds two hex numbers as decimal numbers and holds onto the sum as a decimal number
  @file Add.cpp
  @author Jonathan Chi
  @version 1.0 1/27/2022
  CS 219
*/
#include "Add.h"
#include "HexToDec.h"
  /**
   * takes in two hex numbers and turns them to decimal numbers to add them, and then puts that into a decimal, sum
   * @param hex1 the first hex number taken in as a string
   * @param hex2 the second hex number taken in as a string
   */
Add::Add(std::string hex1, std::string hex2){
  uint32_t dec1 = 0;
  uint32_t dec2 = 0;
  HexToDec htd1(hex1);
  dec1 = htd1.getDec();
  HexToDec htd2(hex2);
  dec2 = htd2.getDec();
  sum = dec1 + dec2;
}

//getter for the sum
uint32_t Add::getSum(){
  return sum;
}