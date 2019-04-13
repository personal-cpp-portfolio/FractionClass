#include "Fraction.h"
#include <iostream>


Fraction::Fraction()
{
}

Fraction::Fraction(int numerator, int denominator) : _numerator(numerator), _denominator(denominator)
{

}

Fraction::~Fraction()
{
}


constexpr int Fraction::GetNumerator() const
{
	return _numerator;
}

constexpr int Fraction::GetDenominator() const
{
	return _denominator;
}

/***
I am implementing the smiley face method to add fractions
It is a much simpler way that sometimes can get cumbersome on paper
But this is a computer, so I think it is perfect for the occasion.
More info here: https://www.youtube.com/watch?time_continue=27&v=1fecspQyEQs
TODO: Add simplification
Same method has been implemented for Subtraction
***/
Fraction& Fraction::operator+=(const Fraction &operand)
{
	if (_denominator == operand._denominator)
	{
		_numerator += operand._numerator;
		
		return *this;
	}
	else
	{
		int firstValue = _numerator * operand._denominator;
		int secondValue = _denominator * operand._numerator;
		int commonDenominator = _denominator * operand._denominator;

		_numerator = firstValue + secondValue;
		_denominator = commonDenominator;

		return *this;
	}
}

Fraction& Fraction::operator-=(const Fraction &operand)
{
	if (_denominator == operand._denominator)
	{
		_numerator -= operand._numerator;
		
		return *this;
	}
	else
	{
		int firstValue = _numerator * operand._denominator;
		int secondValue = _denominator * operand._numerator;
		int commonDenominator = _denominator * operand._denominator;

		_numerator = firstValue - secondValue;
		_denominator = commonDenominator;

		return *this;
	}
}

Fraction& Fraction::operator*=(const Fraction &operand)
{
	_numerator *= operand._numerator;
	_denominator *= operand._denominator;

	return *this;
}

Fraction& Fraction::operator/=(const Fraction &operand)
{
	_numerator *= operand._denominator;
	_denominator *= operand._numerator;

	return *this;
}