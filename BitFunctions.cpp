/*
This file does all the bit wise operations: AND, ORR, ASR, LSR,  LSL, NOT, XOR
*/
#include "BitFunctions.h"


/**
* takes in two hex numbers and does a bitwise AND operation on the operands
* @param hex1 the first hex number taken in as a string
* @param hex2 the second hex number taken in as a string
*/

std::string BitFunctions::andOp(std::string hex1, std::string hex2){
	HexToBi htb1(hex1);
	HexToBi htb2(hex2);
	std::string bits1 = htb1.getBi();
	std::string bits2 = htb2.getBi();
	int length1 = bits1.length();
	int length2 = bits2.length();
	int count;
	if (length1 < length2){
		count = length1;
	}
	else{
		count = length2;
	}
	for(count; count>=0; count--){
		if(bits1[count] == bits2[count] && bits1[count] == '1'){
			output.insert(0,"1");
		}else{
			output.insert(0,"0");
		}
	}
	output.pop_back();
	return output;
}

/**
* takes in two hex numbers and does a bitwise ORR operation on the operands
* @param hex1 the first hex number taken in as a string
* @param hex2 the second hex number taken in as a string
*/
std::string BitFunctions::orr(std::string hex1, std::string hex2){
	HexToBi htb1(hex1);
	HexToBi htb2(hex2);
	std::string bits1 = htb1.getBi();
	std::string bits2 = htb2.getBi();
	int length1 = bits1.length();
	int length2 = bits2.length();
	int count;
	if (length1 < length2){
		count = length1;
	}
	else{
		count = length2;
	}
	for(count; count>=0; count--){
		if(bits1[count] == bits2[count] && bits1[count] == '0'){
			output.insert(0,"0");
		}else{
			output.insert(0,"1");
		}
	}
	output.pop_back();
	if(length1 < length2){
		output.insert(0, bits2.substr(0, length2 - length1));
	}
	else if(length2 < length1){
		output.insert(0, bits1.substr(0, length1 - length2));
	}


	return output;
}

/**
* takes in two hex numbers and does a bitwise XOR operation on the operands
* @param hex1 the first hex number taken in as a string
* @param hex2 the second hex number taken in as a string
*/
std::string BitFunctions::xorOp(std::string hex1, std::string hex2){
	HexToBi htb1(hex1);
	HexToBi htb2(hex2);
	std::string bits1 = htb1.getBi();
	std::string bits2 = htb2.getBi();
	int length1 = bits1.length();
	int length2 = bits2.length();
	int count;
	if (length1 < length2){
		count = length1;
	}
	else{
		count = length2;
	}
	for(count; count>=0; count--){
		if(bits1[count] != bits2[count]){
			output.insert(0,"1");
		}else{
			output.insert(0,"0");
		}
	}
	output.pop_back();
	if(length1 < length2){
		output.insert(0, bits2.substr(0, length2 - length1));
	}
	else if(length2 < length1){
		output.insert(0, bits1.substr(0, length1 - length2));
	}
	return output;
}

/**
* takes in a hex number and does a bitwise NOT operation on the operand
* @param hex the first hex number taken in as a string
*/
std::string BitFunctions::notOp(std::string hex){
	HexToBi htb(hex);
	std::string bits = htb.getBi();
	int length = bits.length();
	for(int count = 0; count <length; count++){
		if(bits[count] == '0'){
			output += '1';
		}else{
			output += '0';
		}
	}
	return output;
}

/**
* takes in a hex number and does a bitwise ASR operation on the operand
* @param hex the first hex number taken in as a string
*/
std::string BitFunctions::asr(std::string hex){
	HexToBi htb(hex);
	std::string bits = htb.getBi();
	int length = bits.length();
	if(bits[0] == '0'){
		output+= '0';
	}else{
		output+= '1';
	}
	output += bits.substr(0, length-1);
	return output;
}

/**
* takes in a hex number and does a bitwise LSR operation on the operand
* @param hex the first hex number taken in as a string
*/
std::string BitFunctions::lsr(std::string hex){
	HexToBi htb(hex);
	std::string bits = htb.getBi();
	int length = bits.length();
	output+= '0';
	output += bits.substr(0, length-1);
	return output;
}

/**
* takes in a hex number and does a bitwise LSL operation on the operand
* @param hex the first hex number taken in as a string
*/
std::string BitFunctions::lsl(std::string hex){
	HexToBi htb(hex);
	std::string bits = htb.getBi();
	int length = bits.length();
	output += bits.substr(1);
	output+= '0';
	return output;
}