#pragma once
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>

struct Sales_data 
{
	std::string _isbn{ "Unknown" };
	unsigned int _quantity{ 0 };
	double _revenue{ 0 };

	void Input_Sales_data();
	void Output_Sales_data();
	const Sales_data& operator=(const Sales_data& rhs);
};

Sales_data operator+(const Sales_data& lhs, const Sales_data& rhs);

#endif // !SALES_DATA_H

