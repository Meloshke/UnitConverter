#include "capacity.h"
#include "weight.h"
#include "length.h"

#include <iostream>
#include <windows.h>
#include <string>


int main()
{
    
    HANDLE cHandle = GetStdHandle(STD_OUTPUT_HANDLE);   // get console output handle

    SetConsoleTextAttribute(cHandle, FOREGROUND_GREEN); // change text color to green
    SetConsoleTitleA("UnitConverter");                  // change console window title to "UnitConverter"


    std::cout << "====================================================================\n"
              << "===========================Unit Converter===========================\n"
              << "==========================Available Units:==========================\n"
              << "==================Weight: mg, g, kg, t, lb, oz, gr==================\n"
              << "=====================Capacity: ml, l, gal, qt=======================\n"
              << "===============Length: mm, cm, m, km, in, ft, yd, mi================\n"
              << "====================================================================\n\n\n";
    std::cout << "YOU CAN'T CONVERT A DIFFERENT TYPE UNIT TO ANOTHER!!!\n";

    std::cout << "What kind of units you want to convert: ";
    std::string unitType{};
    std::cin >> unitType;

    if (unitType == "capacity" || unitType == "Capacity")
    {
        capacityType();
    }
    else if (unitType == "weight" || unitType == "Weight")
    {
        weightType();
    }
    else if (unitType == "length" || unitType == "Length")
    {
        lengthType();
    }
}
