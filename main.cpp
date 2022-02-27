/*
  This file reads in the file then sees what type of operation is needed. It then calls the add class to add the two hex numbers then prints out the sum by calling the DecToHex class.
  @file main.cpp
  @author Jonathan Chi
  @version 1.0 1/27/2022
  CS 219
*/
#include <iostream>
#include <fstream>
#include <stdint.h>
#include <iomanip>
#include <sstream>
#include <string>
#include "HexToDec.h"
#include "DecToHex.h"
#include "Add.h"
#include "Sub.h"
#include "HexToBi.h"
#include "BiToHex.h"
#include "BitFunctions.h"

int main() {
  //sets up to read in file and take in the operation, and hex numbers
  std::ifstream readFile("Programming-Project-2.txt");
  std::string op;
  std::string hex1;
  std::string hex2;
  //reads in file then gets operation and hex numbers, then prints them
  while(readFile >> op >> hex1 >> hex2){
    if(op.compare("ADD") == 0){
      Add add(hex1, hex2);
      DecToHex dth(add.getSum());
      dth.printHex();
      std::cout<<std::endl;
    }
    if(op.compare("SUB") == 0){
      Sub sub(hex1, hex2);
      DecToHex dth(sub.getDif());
      dth.printHex();
      std::cout<<std::endl;
    }
    if(op.compare("AND") == 0){
      BitFunctions bf;
      std::string anded = bf.andOp(hex1, hex2);
      BiToHex bth(anded);
      bth.printHex();
      std::cout << std::endl;
    }
    if(op.compare("ORR") == 0){
      BitFunctions bf;
      std::string orred = bf.orr(hex1, hex2);
      BiToHex bth(orred);
      bth.printHex();
      std::cout << std::endl;
    }
    if(op.compare("XOR") == 0){
      BitFunctions bf;
      std::string xorred = bf.xorOp(hex1, hex2);
      BiToHex bth(xorred);
      bth.printHex();
      std::cout << std::endl;
    }
    if(op.compare("NOT") == 0){
      BitFunctions bf;
      std::string notted = bf.notOp(hex1);
      BiToHex bth(notted);
      bth.printHex();
      std::cout << std::endl;
    }
    if(op.compare("ASR") == 0){
      BitFunctions bf;
      std::string asred = bf.asr(hex1);
      BiToHex bth(asred);
      bth.printHex();
      std::cout << std::endl;
    }
    if(op.compare("LSR") == 0){
      BitFunctions bf;
      std::string lsred = bf.lsr(hex1);
      BiToHex bth(lsred);
      bth.printHex();
      std::cout << std::endl;
    }
    if(op.compare("LSL") == 0){
      BitFunctions bf;
      std::string lsled = bf.lsl(hex1);
      BiToHex bth(lsled);
      bth.printHex();
      std::cout << std::endl;
    }
  }
}