#include "Human.h"

void Human::SetFullName(std::string const& fullName)
{
	m_fullName = fullName;
}

void Human::SetDateOfBirth(std::string const& dateOfBirth)
{
	m_dateOfBirth = dateOfBirth;
}

void Human::SetPhoneNumber(size_t phoneNumber)
{
	m_phoneNumber = phoneNumber;
}

std::string Human::GetFullName()
{
	return m_fullName;
}

std::string Human::GetAge()
{
	return m_dateOfBirth;
}
