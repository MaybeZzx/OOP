#include <cmath>

#include "Appartment.h"

void Appartment::AddRoom(Room const& room)
{
	m_rooms.push_back(room);
}

void Appartment::CalcullateWalllpaperRequirments(std::vector<WallpaperRoll> const& rolls)
{
	for (const WallpaperRoll& roll : rolls)
	{
		double totalRoomArea = 0;

		for (const Room& room : m_rooms)
		{
			totalRoomArea += room.GetTotalArea();
		}

		double rollArea = roll.GetArea();

		size_t requiresRolls = std::ceil(totalRoomArea / rollArea);

		std::cout << "Roll: " << roll.GetName() << " need " << requiresRolls << std::endl;
		std::cout << "Price: " << roll.GetPrice() << std::endl;
	}
}
