#pragma once
#include <iostream>

class Human
{
public:
	Human(std::string const& name, int age);
	std::string GetName();
	int GetAge();

protected:
	std::string m_name;
	int m_age;

};

