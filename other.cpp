#include "other.h"

#include <iostream>
#include <format>
#include <string>


// asks the user for the quantity
double takeQuantityInput(std::string unitName)
{
	std::string formattedOutput = std::format("How many {} do you want to convert: ", unitName); // format the string so you dont have to create different functions for every unit
	std::cout << formattedOutput;
	double value{};
	std::cin >> value;

	return value;
}


// convert() is a function that you can convert units with
double convert(bool isBigger, double value, double factor)
{
	if (isBigger) // if the first unit is bigger than the second then use the multiplication operator
	{
		double result{ value * factor };
		return result;
	}
	else		  // if the first unit is bigger than the second then use the division operator
	{
		double result{ value / factor };
		return result;
	}
}