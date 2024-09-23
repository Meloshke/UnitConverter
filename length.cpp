#include "length.h"
#include "other.h"

#include <iostream>
#include <format>
#include <string>



void lengthType() // lengthType() is a function that asks for input and then calls an appropriate conversion function to the input
{
    std::cout << "Choose the unit you want to convert: "; // ask the user for the first unit
    std::string unit1{};
    std::cin >> unit1;

    std::cout << "Choose the second unit: "; // ask the user for the unit he wants to convert to the first unit
    std::string unit2{};
    std::cin >> unit2;

    // in the second scope of ifs and else ifs there is a statement that prints out first value the user inputted,
    // then the appropriate unit name is printed out and convert() function is called which converts one unit to another.

    if (unit1 == "mm" || unit1 == "milimeter")
    {
        double value{ takeQuantityInput("milimetres") };

        if (unit2 == "cm" || unit2 == "centimetre")
        {
            std::cout << value << "mm is " << convert(false, value, 10) << "cm\n";
        }

        else if (unit2 == "m" || unit2 == "metre")
        {
            std::cout << value << "mm is " << convert(false, value, 1000) << "m\n";
        }

        else if (unit2 == "km" || unit2 == "kilometre")
        {
            std::cout << value << "mm is " << convert(false, value, 1000000) << "km\n";
        }

        else if (unit2 == "in" || unit2 == "inch")
        {
            std::cout << value << "mm is " << convert(false, value, 25.4) << "in\n";
        }

        else if (unit2 == "ft" || unit2 == "feet")
        {
            std::cout << value << "mm is " << convert(false, value, 304.8) << "ft\n";
        }

        else if (unit2 == "yd" || unit2 == "yard")
        {
            std::cout << value << "mm is " << convert(false, value, 914.4) << "yd\n";
        }

        else if (unit2 == "mi" || unit2 == "mile")
        {
            std::cout << value << "mm is " << convert(false, value, 1609344) << "mi\n";
        }
    }

    else if (unit1 == "cm" || unit1 == "centimetre")
    {
        double value{ takeQuantityInput("centimetres")};

        if (unit2 == "mm" || unit2 == "milimetre")
        {
            std::cout << value << "cm is " << convert(true, value, 10) << "mm\n";
        }

        else if (unit2 == "m" || unit2 == "metre")
        {
            std::cout << value << "cm is " << convert(false, value, 100) << "m\n";
        }

        else if (unit2 == "km" || unit2 == "kilometre")
        {
            std::cout << value << "cm is " << convert(false, value, 100000) << "km\n";
        }

        else if (unit2 == "in" || unit2 == "inch")
        {
            std::cout << value << "cm is " << convert(false, value, 2.54) << "in\n";
        }

        else if (unit2 == "ft" || unit2 == "feet")
        {
            std::cout << value << "cm is " << convert(false, value, 30.48) << "ft\n";
        }

        else if (unit2 == "yd" || unit2 == "yard")
        {
            std::cout << value << "cm is " << convert(false, value, 91.44) << "yd\n";
        }

        else if (unit2 == "mi" || unit2 == "mile")
        {
            std::cout << value << "cm is " << convert(false, value, 160934.4) << "mi\n";
        }
    }

    else if (unit1 == "m" || unit1 == "metre")
    {
        double value{ takeQuantityInput("metres")};

        if (unit2 == "mm" || unit2 == "milimetre")
        {
            std::cout << value << "m is " << convert(true, value, 1000) << "mm\n";
        }

        else if (unit2 == "cm" || unit2 == "centimetre")
        {
            std::cout << value << "m is " << convert(true, value, 100) << "cm\n";
        }

        else if (unit2 == "km" || unit2 == "kilometre")
        {
            std::cout << value << "m is " << convert(false, value, 1000) << "km\n";
        }

        else if (unit2 == "in" || unit2 == "inch")
        {
            std::cout << value << "m is " << convert(true, value, 39.37) << "in\n";
        }

        else if (unit2 == "ft" || unit2 == "feet")
        {
            std::cout << value << "m is " << convert(true, value, 3.28) << "ft\n";
        }

        else if (unit2 == "yd" || unit2 == "yard")
        {
            std::cout << value << "m is " << convert(true, value, 1.09) << "yd\n";
        }

        else if (unit2 == "mi" || unit2 == "mile")
        {
            std::cout << value << "m is " << convert(false, value, 1609.34) << "mi\n";
        }
    }

    else if (unit1 == "km" || unit1 == "kilometre")
    {
        double value{ takeQuantityInput("kilometres")};

        if (unit2 == "mm" || unit2 == "milimetre")
        {
            std::cout << value << "km is " << convert(true, value, 1000000) << "mm\n";
        }

        else if (unit2 == "cm" || unit2 == "centimetre")
        {
            std::cout << value << "km is " << convert(true, value, 100000) << "cm\n";
        }

        else if (unit2 == "m" || unit2 == "metre")
        {
            std::cout << value << "km is " << convert(true, value, 1000) << "m\n";
        }

        else if (unit2 == "in" || unit2 == "inch")
        {
            std::cout << value << "km is " << convert(true, value, 39370.08) << "in\n";
        }

        else if (unit2 == "ft" || unit2 == "feet")
        {
            std::cout << value << "km is " << convert(true, value, 3280.84) << "ft\n";
        }

        else if (unit2 == "yd" || unit2 == "yard")
        {
            std::cout << value << "km is " << convert(true, value, 1093.61) << "yd\n";
        }

        else if (unit2 == "mi" || unit2 == "mile")
        {
            std::cout << value << "km is " << convert(false, value, 1.61) << "mi\n";
        }
    }

    else if (unit1 == "in" || unit1 == "inch")
    {
        double value{ takeQuantityInput("inches")};

        if (unit2 == "mm" || unit2 == "milimetre")
        {
            std::cout << value << "in is " << convert(true, value, 25.4) << "mm\n";
        }

        else if (unit2 == "cm" || unit2 == "centimetre")
        {
            std::cout << value << "in is " << convert(true, value, 2.54) << "cm\n";
        }

        else if (unit2 == "m" || unit2 == "metre")
        {
            std::cout << value << "in is " << convert(false, value, 39.37) << "m\n";
        }

        else if (unit2 == "km" || unit2 == "kilometre")
        {
            std::cout << value << "in is " << convert(false, value, 39370.08) << "km\n";
        }

        else if (unit2 == "ft" || unit2 == "feet")
        {
            std::cout << value << "in is" << convert(false, value, 12) << "ft\n";
        }

        else if (unit2 == "yd" || unit2 == "yard")
        {
            std::cout << value << "in is " << convert(false, value, 36) << "yd\n";
        }

        else if (unit2 == "mi" || unit2 == "mile")
        {
            std::cout << value << "in is " << convert(false, value, 63360) << "mi\n";
        }
    }

    else if (unit1 == "ft" || unit1 == "feet")
    {
        double value{ takeQuantityInput("feet") };

        if (unit2 == "mm" || unit2 == "milimetre")
        {
            std::cout << value << "ft is " << convert(true, value, 304.8) << "mm\n";
        }

        else if (unit2 == "cm" || unit2 == "centimetre")
        {
            std::cout << value << "ft is " << convert(true, value, 30.48) << "cm\n";
        }

        else if (unit2 == "m" || unit2 == "metre")
        {
            std::cout << value << "ft is " << convert(false, value, 3.28) << "m\n";
        }

        else if (unit2 == "km" || unit2 == "kilometre")
        {
            std::cout << value << "ft is " << convert(false, value, 3280.84) << "km\n";
        }

        else if (unit2 == "in" || unit2 == "inch")
        {
            std::cout << value << "ft is " << convert(true, value, 12) << "in\n";
        }

        else if (unit2 == "yd" || unit2 == "yard")
        {
            std::cout << value << "ft is " << convert(false, value, 3) << "yd\n";
        }

        else if (unit2 == "mi" || unit2 == "mile")
        {
            std::cout << value << "ft is " << convert(false, value, 5280) << "mi\n";
        }
    }

    else if (unit1 == "yd" || unit1 == "yard")
    {
        double value{ takeQuantityInput("yard") };

        if (unit2 == "mm" || unit1 == "milimetre")
        {
            std::cout << value << "yd is " << convert(true, value, 914.4) << "mm\n";
        }

        else if (unit2 == "cm" || unit2 == "centimetre")
        {
            std::cout << value << "yd is " << convert(true, value, 91.44) << "cm\n";
        }

        else if (unit2 == "m" || unit2 == "metre")
        {
            std::cout << value << "yd is " << convert(false, value, 1.09) << "m\n";
        }

        else if (unit2 == "km" || unit2 == "kilometre")
        {
            std::cout << value << "yd is " << convert(false, value, 1093.61) << "km\n";
        }

        else if (unit2 == "in" || unit2 == "inch")
        {
            std::cout << value << "yd is " << convert(true, value, 36) << "in\n";
        }

        else if (unit2 == "ft" || unit2 == "feet")
        {
            std::cout << value << "yd is " << convert(true, value, 3) << "ft\n";
        }
        
        else if (unit2 == "mi" || unit2 == "mile")
        {
            std::cout << value << "yd is " << convert(false, value, 1760) << "mi\n";
        }
    }

    else if (unit1 == "mi" || unit1 == "mile")
    {
        double value{ takeQuantityInput("mile") };
        
        if (unit2 == "mm" || unit2 == "milimetre")
        {
            std::cout << value << "mi is " << convert(true, value, 1609344) << "mm\n";
        }

        else if (unit2 == "cm" || unit2 == "centimetre")
        {
            std::cout << value << "mi is " << convert(true, value, 160934.4) << "cm\n";
        }

        else if (unit2 == "m" || unit2 == "metre")
        {
            std::cout << value << "mi is " << convert(true, value, 1609.34) << "m\n";
        }

        else if (unit2 == "km" || unit2 == "kilometre")
        {
            std::cout << value << "mi is " << convert(true, value, 1.609) << "km\n";
        }
        
        else if (unit2 == "in" || unit2 == "inch")
        {
            std::cout << value << "mi is " << convert(true, value, 63360) << "in\n";
        }

        else if (unit2 == "ft" || unit2 == "feet")
        {
            std::cout << value << "mi is " << convert(true, value, 5280) << "ft\n";
        }

        else if (unit2 == "yd" || unit2 == "yard")
        {
            std::cout << value << "mi is " << convert(true, value, 1760) << "yd\n";
        }

    }

}