#include "Student.h"

void Student::SetId(size_t id)
{
	m_id = id;
}

void Student::SetSchool(std::string const& school)
{
	m_school = school;
}

void Student::SetSchoolCountry(std::string country)
{
	m_schoolCountry = country;
}

void Student::SetSchoolCity(std::string city)
{
	m_schoolCity = city;
}
