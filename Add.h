/*
  This file adds two hex numbers as decimal numbers and holds onto the sum as a decimal number
  @file Add.h
  @author Jonathan Chi
  @version 1.0 1/27/2022
  CS 219
*/
#ifndef ADD_H
#define ADD_H

#include "DecToHex.h"
#include "HexToDec.h"
#include <iostream>
#include <stdint.h>
#include <bits/stdc++.h>
#include <string>

class Add{
  //The sum of the hex numbers as a decimal number
  uint32_t sum = 0;
public:
  Add() = default;
  Add(std::string, std::string);
  uint32_t getSum();
};

#endif