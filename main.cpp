#include <iostream>
#include "/segy.h"

int main () {
	
	segy sgy;
	sgy.OpenFile("velocity.segy");
    sgy.PrintTextHeader();
	sgy.PrintBinaryHeader();
    sgy.PrintTraceHeader();
    
}
