#pragma once
#include "iostream"

class WallpaperRoll
{
public:
	WallpaperRoll(std::string const& name, double width, double length, double price)
		: m_name(name), m_width(width), m_length(length), m_price(price) {}

	double GetArea() const;
	std::string GetName() const;
	double GetPrice() const;
private:
	std::string m_name;
	double m_width;
	double m_length;
	double m_price;
};

