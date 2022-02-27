/*
  This file turns the decimal number into a hex number and can print the hex number
  @file DecToHex.cpp
  @author Jonathan Chi
  @version 1.0 1/27/2022
  CS 219
*/
#include "DecToHex.h"
  /**
   * takes in a decimal number and then turns it into ascii characters to turn it into a hex number
   * @param dec the decimal number
   */
DecToHex::DecToHex(uint32_t dec){
  //loop to take in the decimal number and turn it into an ascii character to represent a hex number.
  if(dec == 0){
    hexNum[0] = 0 + 48;
    count++;
  }
  while (dec!=0){
    uint32_t temp = 0;
    temp = dec%16;
    if (temp<10){
      hexNum[count] = temp + 48;
      count++;
    }else if(temp < 16){
      hexNum[count] = temp + 55;
      count++;
    }
    dec = dec/16;

  }
}

//prints out the hex number
void DecToHex::printHex(){
  for(int j = count-1; j>= 0; j--){
    std::cout<<hexNum[j];
  }
}
