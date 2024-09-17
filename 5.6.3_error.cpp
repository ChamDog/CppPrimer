#include <iostream>
#include <stdexcept>

int main()
{
    double d1, d2;
	while (std::cin >> d1 >> d2)
	{
		try
		{
			if (d2 == 0) { throw std::runtime_error("d2 cannot be 0\n"); }
			double res = d1 / d2;
			std::cout << res;
		}
		catch(const std::runtime_error& err)//catch用来抓throw
		{
			std::cout << err.what() << "wanna try again?y or no\n";
			char a;
			std::cin >> a;
			if (a == 'n')break;
		}//没有catch子句时循环继续
	}
}
