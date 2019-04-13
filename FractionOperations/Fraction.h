#ifndef FRACTION_H
#include <ostream>
#include <istream>
#include <iostream>

class Fraction
{
private:
	int _numerator;
	int _denominator;
public: 
	Fraction();
	Fraction(int numerator, int denominator);
	~Fraction();
	
	Fraction& operator+=(const Fraction &operand);
	Fraction& operator-=(const Fraction &operand);
	Fraction& operator*=(const Fraction &operand);
	Fraction& operator/=(const Fraction &operand);
	
	friend std::ostream& operator <<(std::ostream& out, const Fraction& f);
	friend std::istream& operator>>(std::istream& is, Fraction& f);

	constexpr int GetNumerator() const;
	constexpr int GetDenominator() const;
};

/***Helper functions to perform arithmetic operations on fractions***/
inline Fraction operator+(Fraction firstOperand, Fraction secondOperand)
{
	return firstOperand += secondOperand;
}

inline Fraction operator-(Fraction firstOperand, Fraction secondOperand)
{
	return firstOperand -= secondOperand;
}

inline Fraction operator*(Fraction firstOperand, Fraction secondOperand)
{
	return firstOperand *= secondOperand;
}

inline Fraction operator/(Fraction firstOperand, Fraction secondOperand)
{
	return firstOperand /= secondOperand;
}

inline std::ostream& operator<<(std::ostream& out, const Fraction& f)
{
	return out << f._numerator << '/' << f._denominator;
}

inline std::istream& operator>>(std::istream& is, Fraction& f)
{
	std::cout << "Enter Numerator: ";
	is >> f._numerator;
	std::cout << "Enter Denominator";
	is >> f._denominator;

	return is;
}
#endif // !FRACTION_H