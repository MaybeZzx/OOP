#include "WallpaperRoll.h"

double WallpaperRoll::GetArea() const
{
	return m_width * m_length;
}

std::string WallpaperRoll::GetName() const
{
	return m_name;
}

double WallpaperRoll::GetPrice() const
{
	return m_price;
}
