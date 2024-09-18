#pragma once
#include <iostream>
#include <vector>
#include <set>

#include "Student.h"

class Group
{
public:
	Group(std::string const& name, std::set<Student> students, std::set<std::string> lessons);

private:
	std::string m_name;
	std::set<Student> m_students;
	std::set<std::string> m_lessons;
};

