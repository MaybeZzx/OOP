#pragma once
#include "Human.h"
class Student : public Human
{
public:
	void SetId(size_t id);
	void SetSchool(std::string const& school);
	void SetSchoolCountry(std::string country);
	void SetSchoolCity(std::string city);

private:
	size_t m_id;
	std::string m_school;
	std::string m_schoolCountry;
	std::string m_schoolCity;
};

