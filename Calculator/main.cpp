#include <windows.h>
#include <iostream>

// simple calculator I made while bored, is kinda buggy with broken numbers and some subtraction and division problems.
// code is really bad don't judge.
// made by levitate.

namespace calculator
{
	int add(float a, float b)
	{
		return a + b;
	}

	int subtract(float a, float b)
	{
		return a - b;
	}

	int multiply(float a, float b)
	{
		return a * b;
	}

	int divide(float a, float b)
	{
		if (a == 0 || b == 0)
		{
			return 0;
		}
		else
		{
			return a / b;
		}
	}
}

int selection;
int a;
int b;

int main()
{
	std::cout << "Choose:" << std::endl;
	std::cout << "[1] Addition" << std::endl;
	std::cout << "[2] Subtraction" << std::endl;
	std::cout << "[3] Multiplication" << std::endl;
	std::cout << "[4] Division" << std::endl;
	std::cin >> selection;

	if (selection < 1 || selection > 4)
	{
		std::cout << "Invalid selection." << std::endl;
		return 1;
	}

	std::cout << "Enter the first number:" << std::endl;
	std::cin >> a;
	std::cout << "Enter the second number:" << std::endl;
	std::cin >> b;

	if (selection == 1)
	{
		std::cout << "Result: " << calculator::add(a, b) << std::endl;
		return 0;
	}
	else if (selection == 2)
	{
		std::cout << "Result: " << calculator::subtract(a, b) << std::endl;
		return 0;
	}
	else if (selection == 3)
	{
		std::cout << "Result: " << calculator::multiply(a, b) << std::endl;
		return 0;
	}
	else if (selection == 4)
	{
		std::cout << "Result: " << calculator::divide(a, b) << std::endl;
		return 0;
	}
	else
	{
		std::cout << "Invalid selection." << std::endl;
		return 1;
	}
}
