#include "Lift.h"
#include "iostream"

Lift::Lift(size_t currentFloor, bool state, size_t newLowerFloor, size_t newUpperFloor)
{
	m_currentFloor = currentFloor;
	m_state = state;
	m_lowerFloor = newLowerFloor;
	m_upperFloor = newUpperFloor;
}



size_t Lift::getCurrentFloor()
{
	return m_currentFloor;
}

bool Lift::getState()
{
	return m_state;
}

void Lift::MoveTo(size_t nextFloor)
{
	if (!CheckState())
	{
		return;
	}
	m_currentFloor = nextFloor;
}

void Lift::CallLift(size_t floor)
{
	if (m_currentFloor == floor)
	{
		std::cout << "Лифт находится на текущем этаже" << std::endl;
	}
	if (floor < m_lowerFloor || floor > m_upperFloor)
	{
		std::cout << "Заданный этаж: " << floor << std::endl;
		std::cout << "Рабочий диапазон лифта: " << m_lowerFloor << " - " << m_upperFloor << " этаж" << std::endl;
	}
	if (!CheckState())
	{
		return;
	}
	MoveTo(floor);
}

void Lift::SwitchOn()
{
	m_state = true;
}

void Lift::SwitchOff()
{
	m_state = false;
}

void Lift::SetRange(size_t lowerFloor, size_t upperFloor)
{
	m_lowerFloor = lowerFloor;
	m_upperFloor = upperFloor;
	
	if (m_currentFloor < lowerFloor) m_currentFloor = lowerFloor;
	if (m_currentFloor > upperFloor) m_currentFloor = upperFloor;
	if (lowerFloor > upperFloor) 
	{
		size_t temp = lowerFloor;
		lowerFloor = upperFloor;
		upperFloor = temp;
	}
}

bool Lift::CheckState()
{
	if (!m_state)
	{
		std::cout << "Lift is off" << std::endl;
	}
	return m_state;
}
