/*
	This file converts hexadecimal to binary
	@file HexToBi.cpp
	@author Jonathan Chi
	@version 1.0 2/25/2022
 	CS 219
*/
#include "HexToBi.h"

/**
* takes in a string of a hex number to turn it into a binary number and sets binaryNum to that binary number
* @param hex the hex number
*/
HexToBi::HexToBi(std::string hex){
	int length = hex.length();
	for(int count = 1; count < length; count++){
		switch(hex[count]){
			case '0':
			binaryNum += "0000";
			break;
			case '1':
			binaryNum += "0001";
			break;
			case '2':
			binaryNum += "0010";
			break;
			case '3':
			binaryNum += "0011";
			break;
			case '4':
			binaryNum += "0100";
			break;
			case '5':
			binaryNum += "0101";
			break;
			case '6':
			binaryNum += "0110";
			break;
			case '7':
			binaryNum += "0111";
			break;
			case '8':
			binaryNum += "1000";
			break;
			case '9':
			binaryNum += "1001";
			break;
			case 'A':
			binaryNum += "1010";
			break;
			case 'B':
			binaryNum += "1011";
			break;
			case 'C':
			binaryNum += "1100";
			break;
			case 'D':
			binaryNum += "1101";
			break;
			case 'E':
			binaryNum += "1110";
			break;
			case 'F':
			binaryNum += "1111";
			break;
		}
	}
}

std::string HexToBi::getBi(){
	return binaryNum;
}