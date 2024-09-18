#pragma once
class Decimal
{
public:
	Decimal(int const& numerator, int const& denominator, int const& multiplier);
	Decimal(int const& numerator, int const& denominator);

	int GetNumerator() const;
	int GetDenominator() const;
	Decimal operator + (Decimal& another);

private:
	int m_multiplier;
	int m_numerator;
	int m_denominator;
	
};

