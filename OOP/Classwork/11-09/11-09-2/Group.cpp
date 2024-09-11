#include "Group.h"

Group::Group(std::string const& name, std::vector<std::string> lessons) 
{
	m_name = name;
	for (size_t i = 0; i < lessons.size(); ++i)
	{
		m_lessons.insert(m_lessons.end(), lessons[i]);
	}
}
