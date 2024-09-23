#include "Fraction.h"

Fraction::Fraction(int const& numerator, int const& denominator)
{
	m_numerator = numerator;
	m_denominator = (denominator == 0) ? 1 : denominator;
}

int Fraction::GetNumerator() const
{
	return m_numerator;
}

int Fraction::GetDenominator() const
{
	return m_denominator;
}

Fraction Fraction::operator+(Fraction& another)
{
	if (m_denominator == another.m_denominator)
	{
		return Fraction(m_numerator + another.m_numerator, m_denominator);
	}
	else
	{
	}
	
}
