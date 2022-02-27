/*
	This file converts binary to hexadecimal
	@file BiToHex.h
	@author Jonathan Chi
	@version 1.0 2/25/2022
 	CS 219
*/
#include "BiToHex.h"
/**
* takes in a binary number and then turns it into a hex number
* @param bi the binary number
*/
BiToHex::BiToHex(std::string bi){
	//loop to take in the binary number
	int length = bi.length();
	std::string fourBits;
	for(int i = 0; i < length/4; i++){
		fourBits = bi.substr(i*4, 4);
		if(fourBits.compare("0000") == 0){
			hexNum[i] = '0';
		}
		else if(fourBits.compare("0001") == 0){
			hexNum[i] = '1';
		}
		else if(fourBits.compare("0010") == 0){
			hexNum[i] = '2';
		}
		else if(fourBits.compare("0011") == 0){
			hexNum[i] = '3';
		}
		else if(fourBits.compare("0100") == 0){
			hexNum[i] = '4';
		}
		else if(fourBits.compare("0101") == 0){
			hexNum[i] = '5';
		}
		else if(fourBits.compare("0110") == 0){
			hexNum[i] = '6';
		}
		else if(fourBits.compare("0111") == 0){
			hexNum[i] = '7';
		}
		else if(fourBits.compare("1000") == 0){
			hexNum[i] = '8';
		}
		else if(fourBits.compare("1001") == 0){
			hexNum[i] = '9';
		}
		else if(fourBits.compare("1010") == 0){
			hexNum[i] = 'A';
		}
		else if(fourBits.compare("1011") == 0){
			hexNum[i] = 'B';
		}
		else if(fourBits.compare("1100") == 0){
			hexNum[i] = 'C';
		}
		else if(fourBits.compare("1101") == 0){
			hexNum[i] = 'D';
		}
		else if(fourBits.compare("1110") == 0){
			hexNum[i] = 'E';
		}
		else if(fourBits.compare("1111") == 0){
			hexNum[i] = 'F';
		}
		count++;
	}
}

void BiToHex::printHex(){
	for(int j = 0; j<count; j++){
		std::cout<<hexNum[j];
	}
}