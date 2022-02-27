/*
	This file does all the bit wise operations: AND, ORR, ASR, LSR,  LSL, NOT, XOR
	@file BitFunctions.h
	@author Jonathan Chi
	@version 1.0 2/18/2022
 	CS 219
*/
#include "HexToBi.h"
#include <iostream>
#include <stdint.h>
#include <bits/stdc++.h>
#include <string>

class BitFunctions{
	//Output
	std::string output;
public:
	BitFunctions() = default;
	std::string andOp(std::string, std::string);
	std::string orr(std::string, std::string);
	std::string xorOp(std::string, std::string);
	std::string notOp(std::string);
	std::string asr(std::string);
	std::string lsr(std::string);
	std::string lsl(std::string);
};