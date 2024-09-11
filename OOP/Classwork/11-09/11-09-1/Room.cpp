#include "Room.h"

Room::Room(std::string const& name, double length, double width, double height, double wallpaperOnCeiling)
	: m_name(name), m_length(length), 
	m_width(width), m_height(height), 
	m_wallpaperOnCeiling (wallpaperOnCeiling) {}

double Room::GetWallArea() const
{
	return 2 * (m_length * m_width) * m_height;
}

double Room::GetCeilingArea() const
{
	return m_length * m_width;
}

double Room::GetTotalArea() const
{
	double wallArea = GetWallArea();
	if (m_wallpaperOnCeiling)
	{
		wallArea += GetCeilingArea();
	}
	return wallArea;
}
