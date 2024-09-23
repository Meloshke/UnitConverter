#include "capacity.h"
#include "other.h"

#include <iostream>
#include <format>
#include <string>



void capacityType() // capacityType() is a function that asks for input and then calls an appropriate conversion function to the input
{
	std::cout << "Choose the unit you want to convert: "; // ask the user for the first unit
	std::string unit1{};
	std::cin >> unit1;

	std::cout << "Choose the second unit: "; // ask the user for the unit he wants to convert to the first unit
	std::string unit2{};
	std::cin >> unit2;

	// in the second scope of ifs and else ifs there is a statement that prints out first value the user inputted,
	// then the appropriate unit name is printed out and convert() function is called which converts one unit to another.

	if (unit1 == "ml" || unit1 == "mililitre")
	{
		double value{ takeQuantityInput("mililitres")};

		if (unit2 == "l" || unit2 == "litre")
		{
			std::cout << value << "ml is " << convert(false, value, 1000) << "l\n";
		}

		else if (unit2 == "gal" || unit2 == "gallon")
		{
			std::cout << value << "ml is " << convert(false, value, 3785) << "gal\n";
		}

		else if (unit2 == "qt" || unit2 == "quart")
		{
			std::cout << value << "ml is " << convert(false, value, 946) << "qt\n";
		}
	}

	else if (unit1 == "l" || unit1 == "litre")
	{
		double value{ takeQuantityInput("litres") };

		if (unit2 == "ml" || unit2 == "mililitre")
		{
			std::cout << value << "l is " << convert(true, value, 1000) << "ml\n";
		}

		else if (unit2 == "gal" || unit2 == "gallon")
		{
			std::cout << value << "l is " << convert(false, value, 3.785) << "gal\n";
		}

		else if (unit2 == "qt" || unit2 == "quart")
		{
			std::cout << value << "l is " << convert(false, value, 0.946) << "qt\n";
		}
	}

	else if (unit1 == "gal" || unit2 == "gallon")
	{
		double value{ takeQuantityInput("gallons") };

		if (unit2 == "ml" || unit2 == "mililitre")
		{
			std::cout << value << "gal is " << convert(true, value, 3785) << "ml\n";
		}

		else if (unit2 == "l" || unit2 == "litre")
		{
			std::cout << value << "gal is " << convert(true, value, 3.785) << "l\n";
		}

		else if (unit2 == "qt" || unit2 == "quart")
		{
			std::cout << value << "gal is " << convert(true, value, 4) << "qt\n";
		}
	}

	else if (unit1 == "qt" || unit2 == "quart")
	{
		double value{ takeQuantityInput("quarts") };

		if (unit2 == "ml" || unit2 == "mililitre")
		{
			std::cout << value << "qt is " << convert(true, value, 946) << "ml\n";
		}

		else if (unit2 == "l" || unit2 == "litre")
		{
			std::cout << value << "qt is " << convert(true, value, 0.946) << "l\n";
		}

		else if (unit2 == "gal" || unit2 == "gallon")
		{
			std::cout << value << "qt is " << convert(true, value, 0.25) << "gal\n";
		}
	}

}