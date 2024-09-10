#include <iostream>

#include "Lift.h"

int main()
{
	setlocale(LC_ALL, "RUS");

	Lift lift(5, false, 1, 10);

	std::cout << "current state: " << lift.getState() << std::endl;
	std::cout << "current floor: " << lift.getCurrentFloor() << std::endl;
	std::cout << "--move to 10" << std::endl;
	lift.CallLift(11);
	std::cout << "current floor: " << lift.getCurrentFloor() << std::endl;

}