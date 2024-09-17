#include "Sales_data.h"
#include<memory>

void Sales_data::Input_Sales_data()
{
	double price;
	std::cout << "price:"; std::cin >> price;
	std::cout << "ISBN & Quantity:"; std::cin >> _isbn >> _quantity;
	_revenue = price * _quantity;
}

void Sales_data::Output_Sales_data()
{
	std::cout << _isbn << " " << _quantity << " " << _revenue << "\n";
}

Sales_data operator+(const Sales_data& lhs,const Sales_data& rhs)//ע��������ص���һ��temp������������ã������
{
	if (lhs._isbn == rhs._isbn)
	{
		Sales_data newSd;
		newSd._isbn = lhs._isbn;
		newSd._quantity = lhs._quantity + rhs._quantity;
		newSd._revenue = lhs._revenue + rhs._revenue;
		return newSd;
	}
	else
	{
		std::cout << "Wrong";
	}
}

const Sales_data& Sales_data::operator=(const Sales_data& rhs)
{
	_isbn = rhs._isbn;
	_quantity = rhs._quantity;
	_revenue = rhs._revenue;
	return *this;
}
