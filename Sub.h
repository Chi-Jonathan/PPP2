/*
  This file subtracts two the second hex operand from the first hex operand
  @file Sub.h
  @author Jonathan Chi
  @version 2.0 2/18/2022
  CS 219
*/
#ifndef SUB_H
#define SUB_H

#include "DecToHex.h"
#include "HexToDec.h"
#include <iostream>
#include <stdint.h>
#include <bits/stdc++.h>
#include <string>

class Sub{
  //The difference of the hex numbers as a decimal number
  uint32_t dif = 0;
public:
  Sub() = default;
  Sub(std::string, std::string);
  uint32_t getDif();
};

#endif