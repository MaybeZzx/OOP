#pragma once
#include <string>
class Human
{
public:
	void SetFullName(std::string const& fullName);
	void SetDateOfBirth(std::string const& dateOfBirth);
	void SetPhoneNumber(size_t phoneNumber);
	std::string GetFullName();
	std::string GetAge();
protected:
	std::string m_fullName;
	std::string m_dateOfBirth;
	size_t m_phoneNumber;
	std::string m_country;
	std::string m_city;

};

