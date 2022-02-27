/*
	This file converts binary to hexadecimal
	@file BiToHex.h
	@author Jonathan Chi
	@version 1.0 2/25/2022
 	CS 219
*/
#ifndef BITOHEX_H
#define BITOHEX_H
#include <iostream>
#include <stdint.h>
#include <bits/stdc++.h>
#include <string>

class BiToHex{
  //holds the hex number
  char hexNum[8];
  //holds the count for the number of digits the hex number is in
  uint32_t count = 0;
  public:
  BiToHex() = default;
  BiToHex(std::string);
  void printHex();
};

#endif