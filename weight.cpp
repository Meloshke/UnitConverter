#include "weight.h"
#include "other.h"

#include <iostream>
#include <format>
#include <string>



void weightType() // weightType() is a function that asks for input and then calls an appropriate conversion function to the input
{
    std::cout << "Choose the unit you want to convert: "; // ask the user for the first unit
    std::string unit1{};
    std::cin >> unit1;

    std::cout << "Choose the second unit: "; // ask the user for the unit he wants to convert to the first unit
    std::string unit2{};
    std::cin >> unit2;

    // in the second scope of ifs and else ifs there is a statement that prints out first value the user inputted,
    // then the appropriate unit name is printed out and convert() function is called which converts one unit to another.

    if (unit1 == "mg" || unit2 == "miligram")
    {
        double value{ takeQuantityInput("miligrams") };

        if (unit2 == "g" || unit2 == "gram")
        {
            std::cout << value << "mg is " << convert(false, value, 1000) << "g\n";
        }

        else if (unit2 == "kg" || unit2 == "kilogram")
        {
            std::cout << value << "mg is " << convert(false, value, 1000000) << "kg\n";
        }

        else if (unit2 == "t" || unit2 == "ton")
        {
            std::cout << value << "mg is " << convert(false, value, 1000000000) << "t\n";
        }

        else if (unit2 == "lb" || unit2 == "pound")
        {
            std::cout << value << "mg is " << convert(false, value, 453592.37) << "lb\n";
        }

        else if (unit2 == "oz" || unit2 == "ounce")
        {
            std::cout << value << "mg is " << convert(false, value, 28349.52) << "oz\n";
        }

        else if (unit2 == "gr" || unit2 == "grain")
        {
            std::cout << value << "mg is " << convert(false, value, 64.8) << "gr\n";
        }
    }

    else if (unit1 == "g" || unit1 == "gram")
    {
        double value{ takeQuantityInput("grams") };

        if (unit2 == "mg" || unit2 == "miligram")
        {
            std::cout << value << "g is " << convert(true, value, 1000) << "mg\n";
        }

        else if (unit2 == "kg" || unit2 == "kilogram")
        {
            std::cout << value << "g is " << convert(false, value, 1000) << "kg\n";
        }

        else if (unit2 == "t" || unit2 == "ton")
        { 
            std::cout << value << "g is " << convert(false, value, 1000000) << "t\n";
        }

        else if (unit2 == "lb" || unit2 == "pound")
        { 
            std::cout << value << "g is " << convert(false, value, 453.39) << "lb\n";
        }

        else if (unit2 == "oz" || unit2 == "ounce")
        {

            std::cout << value << "g is " << convert(false, value, 28.35) << "oz\n";
        }

        else if (unit2 == "gr" || unit2 == "grain")
        {
            std::cout << value << "g is " << convert(false, value, 0.065) << "gr\n";
        }
    }

    else if (unit1 == "kg" || unit1 == "kilogram")
    {
        double value{ takeQuantityInput("kilograms") };

        if (unit2 == "mg" || unit2 == "miligram")
        {
            std::cout << value << "kg is " << convert(true, value, 1000000) << "mg\n";
        }

        else if (unit2 == "g" || unit2 == "gram")
        {
            std::cout << value << "kg is " << convert(true, value, 1000) << "g\n";
        }

        else if (unit2 == "t" || unit2 == "ton")
        {
            std::cout << value << "kg is " << convert(false, value, 1000) << "t\n";
        }

        else if (unit2 == "lb" || unit2 == "pound")
        {
            std::cout << value << "kg is " << convert(true, value, 2.2) << "lb\n";
        }

        else if (unit2 == "oz" || unit2 == "ounce")
        {
            std::cout << value << "kg is " << convert(true, value, 35.27) << "oz\n";
        }

        else if (unit2 == "gr" || unit2 == "grain")
        {
            std::cout << value << "kg is " << convert(true, value, 15432.36) << "gr\n";
        }
    }

    else if (unit1 == "t" || unit1 == "ton")
    {
        double value{ takeQuantityInput("tons") };

        if (unit2 == "mg" || unit2 == "miligram")
        {
            std::cout << value << "t is " << convert(true, value, 1000000000) << "mg\n";
        }

        else if (unit2 == "g" || unit2 == "gram")
        {
            std::cout << value << "t is " << convert(true, value, 1000000) << "g\n";
        }

        else if (unit2 == "kg" || unit2 == "kilogram")
        {
            std::cout << value << "t is " << convert(true, value, 1000) << "kg\n";
        }

        else if (unit2 == "lb" || unit2 == "pound")
        {
            std::cout << value << "t is " << convert(true, value, 2204.62) << "lb\n";
        }

        else if (unit2 == "oz" || unit2 == "ounce")
        {
            std::cout << value << "t is " << convert(true, value, 35273.96) << "oz\n";
        }

        else if (unit2 == "gr" || unit2 == "grain")
        {
            std::cout << value << "t is " << convert(true, value, 15432358.35) << "gr\n";
        }
    }
    
    else if (unit1 == "lb" || unit1 == "pound")
    {
        double value{ takeQuantityInput("pounds") };

        if (unit2 == "mg" || unit2 == "miligram")
        {
            std::cout << value << "lb is " << convert(true, value, 453592.37) << "mg\n";
        }

        else if (unit2 == "g" || unit2 == "gram")
        {
            std::cout << value << "lb is " << convert(true, value, 453.59) << "g\n";
        }

        else if (unit2 == "kg" || unit2 == "kilogram")
        {
            std::cout << value << "lb is " << convert(false, value, 0.45) << "kg\n";
        }

        else if (unit2 == "t" || unit2 == "ton")
        {
            std::cout << value << "lb is " << convert(false, value, 0.00045) << "t\n";
        }

        else if (unit2 == "oz" || unit2 == "ounces")
        {
            std::cout << value << "lb is " << convert(true, value, 16) << "oz\n";
        }

        else if (unit2 == "gr" || unit2 == "grain")
        {
            std::cout << value << "lb is " << convert(true, value, 7000) << "gr\n";
        }
    }

    else if (unit1 == "oz" || unit1 == "ounce")
    {
        double value{ takeQuantityInput("ounces") };

        if (unit2 == "mg" || unit2 == "miligram")
        {
            std::cout << value << "oz is " << convert(true, value, 28349.52) << "mg\n";
        }

        else if (unit2 == "g" || unit2 == "gram")
        {
            std::cout << value << "oz is " << convert(true, value, 28.35) << "g\n";
        }

        else if (unit2 == "kg" || unit2 == "kilogram")
        {
            std::cout << value << "oz is " << convert(false, value, 0.028) << "kg\n";
        }

        else if (unit2 == "t" || unit2 == "ton")
        {
            std::cout << value << "oz is " << convert(false, value, 0.000028) << "t\n";
        }

        else if (unit2 == "lb" || unit2 == "pund")
        {
            std::cout << value << "oz is " << convert(false, value, 0.063) << "lb\n";
        }

        else if (unit2 == "gr" || unit2 == "grain")
        {
            std::cout << value << "oz is " << convert(true, value, 437.5) << "gr\n";
        }
    }

    else if (unit1 == "gr" || unit1 == "grain")
    {
        double value{ takeQuantityInput("grains") };

        if (unit2 == "mg" || unit2 == "miligram")
        {
            std::cout << value << "gr is " << convert(true, value, 64.8) << "mg\n";
        }

        else if (unit2 == "g" || unit2 == "gram")
        {
            std::cout << value << "gr is " << convert(false, value, 0.065) << "g\n";
        }

        else if (unit2 == "kg" || unit2 == "kilogram")
        {
            std::cout << value << "gr is " << convert(false, value, 0.000065) << "kg\n";
        }

        else if (unit2 == "t" || unit2 == "ton")
        {
            std::cout << value << "gr is " << convert(false, value, 0.000000065) << "t\n";
        }

        else if (unit2 == "lb" || unit2 == "pound")
        {
            std::cout << value << "gr is " << convert(false, value, 0.00014) << "lb\n";
        }

        else if (unit2 == "oz" || unit2 == "ounce")
        {
            std::cout << value << "gr is " << convert(false, value, 0.0023) << "oz\n";
        }
    }
}