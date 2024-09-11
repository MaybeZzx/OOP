#pragma once
#include "iostream"
class Room
{
public:
	Room(std::string const& name, double length, double width, double height, double wallpaperOnCeiling);

	double GetWallArea() const;
	double GetCeilingArea() const;
	double GetTotalArea() const;

private:
	std::string m_name;
	double m_length;
	double m_width;
	double m_height;
	double m_wallpaperOnCeiling;
};

