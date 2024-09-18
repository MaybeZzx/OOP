#include "Decimal.h"

Decimal::Decimal(int const& numerator, int const& denominator, int const& multiplier)
{
	m_numerator = numerator;
	m_denominator = (denominator == 0) ? 1 : denominator;
	m_multiplier = (multiplier == 0) ? 1 : multiplier;
}

Decimal::Decimal(int const& numerator, int const& denominator)
{
	m_numerator = numerator;
	m_denominator = (denominator == 0) ? 1 : denominator;
}

int Decimal::GetNumerator() const
{
	return m_numerator;
}

int Decimal::GetDenominator() const
{
	return m_denominator;
}

Decimal Decimal::operator+(Decimal& another)
{
	if (m_denominator == another.m_denominator)
	{
		return Decimal(m_numerator + another.m_numerator, m_denominator);
	}
	else
	{
		int temp = m_denominator;
		m_denominator *= another.m_denominator;
		m_numerator *= another.m_denominator;
		another.m_numerator *= temp;
		another.m_denominator *= temp;

	}
	
}
