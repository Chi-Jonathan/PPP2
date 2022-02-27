/*
	This file converts hexadecimal to binary
	@file HexToBi.h
	@author Jonathan Chi
	@version 1.0 2/25/2022
 	CS 219
*/
#ifndef HEXTOBI_H
#define HEXTOBI_H
#include <iostream>
#include <bits/stdc++.h>
#include <stdint.h>
#include <string>

class HexToBi{
	//holds the Binary number
	std::string binaryNum = "";
public:
	HexToBi() = default;
	HexToBi(std::string);
	std::string getBi();
};
#endif