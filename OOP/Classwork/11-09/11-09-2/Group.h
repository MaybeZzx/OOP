#pragma once
#include <iostream>
#include <vector>
#include <set>
class Group
{
public:
	Group(std::string const& name, std::vector<std::string> lessons);

private:
	std::string m_name;
	std::set<std::string> m_lessons;
};

