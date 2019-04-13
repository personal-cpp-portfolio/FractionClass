#include <iostream>
#include "Fraction.h"


void AddOption()
{
	Fraction firstOperand;
	Fraction secondOperand;
	std::cin >> firstOperand;
	std::cin >> secondOperand;
	Fraction result = firstOperand + secondOperand;
	std::cout << result;
}

void SubtractOption()
{
	std::cout << "Enter the 1st Fraction's numerator \n";
	int firstNumerator = 0;
	int firstDenominator = 0;
	std::cin >> firstNumerator;
	std::cout << "Enter the 1st Fraction's denominator \n";
	std::cin >> firstDenominator;

	Fraction firstOperand{ firstNumerator, firstDenominator };

	std::cout << "Enter the 2nd Fraction's numerator \n";
	int secondNumerator = 0;
	int secondDenominator = 0;

	std::cin >> secondNumerator;
	std::cout << "Enter the 1st Fraction's denominator \n";
	std::cin >> secondDenominator;

	Fraction secondOperand{ secondNumerator, secondDenominator };

	Fraction result = firstOperand - secondOperand;
	std::cout << result;
}

void MultiplyOption()
{
	std::cout << "Enter the 1st Fraction's numerator \n";
	int firstNumerator = 0;
	int firstDenominator = 0;
	std::cin >> firstNumerator;
	std::cout << "Enter the 1st Fraction's denominator \n";
	std::cin >> firstDenominator;

	Fraction firstOperand{ firstNumerator, firstDenominator };

	std::cout << "Enter the 2nd Fraction's numerator \n";
	int secondNumerator = 0;
	int secondDenominator = 0;

	std::cin >> secondNumerator;
	std::cout << "Enter the 1st Fraction's denominator \n";
	std::cin >> secondDenominator;

	Fraction secondOperand{ secondNumerator, secondDenominator };

	Fraction result = firstOperand * secondOperand;
	std::cout << result;
}

void DivideOption()
{
	std::cout << "Enter the 1st Fraction's numerator \n";
	int firstNumerator = 0;
	int firstDenominator = 0;
	std::cin >> firstNumerator;
	std::cout << "Enter the 1st Fraction's denominator \n";
	std::cin >> firstDenominator;

	Fraction firstOperand{ firstNumerator, firstDenominator };

	std::cout << "Enter the 2nd Fraction's numerator \n";
	int secondNumerator = 0;
	int secondDenominator = 0;

	std::cin >> secondNumerator;
	std::cout << "Enter the 1st Fraction's denominator \n";
	std::cin >> secondDenominator;

	Fraction secondOperand{ secondNumerator, secondDenominator };

	Fraction result = firstOperand / secondOperand;
	std::cout << result;
}

void PrintMenu()
{
	std::cout << "--- MAIN MENU ---" << "\n"
		<< "(0) Quit" << "\n"
		<< "(1) Add 2 Fractions" << "\n"
		<< "(2) Subtract 2 Fractions" << "\n"
		<< "(3) Multiply 2 Fractions" << "\n"
		<< "(4) Divide 2 Fractions" << std::endl;
}

int Get_Choice()
{
	int choice = 0;
	std::cout << "Enter Choice: ";
	std::cin >> choice;

	return choice;
}

int main()
{
	PrintMenu();

	switch (Get_Choice())
	{
	case 0:
		return 0;
		break;
	case 1:
		AddOption();
		break;
	case 2:
		SubtractOption();
		break;
	case 3:
		MultiplyOption();
		break;
	case 4:
		DivideOption();
		break;
	default:
		std::cout << "Invalid Choice" << std::endl;
		break;
	}

	system("pause");

	return 0;
}