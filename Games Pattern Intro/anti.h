#pragma once
#include <iostream>
// this class is a mess
// made to not run well
// @author Dylan Curran
class Anti
{

public:
	const int m_value = 2;
	const int m_biggerValue = 5;

	void DivideTime() { std::cout << "      Anti Example 5/2: " + m_biggerValue / m_value << std::endl ;} ;
};
