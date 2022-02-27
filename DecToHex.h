/*
  This file turns the decimal number into a hex number and can print the hex number
  @file HexToDec.cpp
  @author Jonathan Chi
  @version 1.0 1/27/2022
  CS 219
*/
#ifndef DECTOHEX_H
#define DECTOHEX_H
#include <iostream>
#include <stdint.h>
#include <bits/stdc++.h>
#include <string>

class DecToHex{
  //holds the hex number
  char hexNum[8];
  //holds the count for the number of digits the hex number is in
  uint32_t count = 0;
  public:
  DecToHex() = default;
  DecToHex(uint32_t);
  void printHex();
};

#endif