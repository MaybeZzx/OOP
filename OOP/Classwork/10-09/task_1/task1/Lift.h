#pragma once
class Lift
{
public:
	Lift(size_t currentFloor, bool state, size_t newLowerFloor, size_t newUpperFloor);

	size_t getCurrentFloor();
	bool getState();

	void CallLift(size_t floor);
	void SwitchOn();
	void SwitchOff();
	void SetRange(size_t lowerFloor, size_t upperFloor);
	

private:
	void MoveTo(size_t nextFloor);
	bool CheckState();
	
	bool m_state;
	size_t m_currentFloor;
	size_t m_lowerFloor;
	size_t m_upperFloor;
};

