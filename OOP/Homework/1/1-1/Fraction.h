#pragma once
class Fraction
{
public:
	Fraction(int const& numerator, int const& denominator);

	int GetNumerator() const;
	int GetDenominator() const;
	Fraction operator + (Fraction& another);

private:
	int m_numerator;
	int m_denominator;
	
};

