
proj2: main.o Add.o Sub.o BitFunctions.o DecToHex.o HexToDec.o HexToBi.o BiToHex.o
	g++ main.o Add.o Sub.o BitFunctions.o DecToHex.o HexToDec.o HexToBi.o BiToHex.o -o proj2
		
main.o: main.cpp Add.h Sub.h DecToHex.h HexToDec.h BiToHex.h HexToBi.h  
	g++ -c main.cpp
	
Add.o: Add.cpp Add.h HexToDec.h
	g++ -c Add.cpp
	
Sub.o: Sub.cpp Sub.h HexToDec.h
	g++ -c Sub.cpp

BitFunctions.o: BitFunctions.cpp BitFunctions.h HexToBi.h
	g++ -c BitFunctions.cpp

DecToHex.o: DecToHex.cpp DecToHex.h
	g++ -c DecToHex.cpp

HexToDec.o: HexToDec.cpp HexToDec.h
	g++ -c HexToDec.cpp

BiToHex.o: BiToHex.cpp BiToHex.h
	g++ -c BiToHex.cpp

HexToBi.o: HexToBi.cpp HexToBi.h
	g++ -c HexToBi.cpp

clean:
	rm *.o proj2
