#include "Group.h"

Group::Group(std::string const& name, std::set<Student> students, std::set<std::string> lessons)
{
	m_name = name;
	m_lessons = lessons;
	m_students = students;
}
