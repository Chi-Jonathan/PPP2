/*
  This file turns the hex numbers to decimal numbers
  @file HexToDec.h
  @author Jonathan Chi
  @version 1.0 1/27/2022
  CS 219
*/
#ifndef HEXTODEC_H
#define HEXTODEC_H
#include <iostream>
#include <bits/stdc++.h>
#include <stdint.h>
#include <string>

class HexToDec{
  //holds the decimal number
  uint32_t decNum = 0;
  public:
  HexToDec() = default;
  HexToDec(std::string);
  uint32_t getDec();
};

#endif