#pragma once
#include <iostream>
#include <vector>
#include "Room.h"
#include "WallpaperRoll.h"
class Appartment
{
public:
	void AddRoom(Room const& room);
	void CalcullateWalllpaperRequirments(std::vector<WallpaperRoll> const& rolls);

private:
	std::vector<Room> m_rooms;
};

