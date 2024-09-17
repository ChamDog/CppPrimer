#include <iostream>
#include <iostream>
#include <string>

std::istream& fun(std::istream& is)
{
    while (!is.eof())//ctrl Z + Enter
    {
        std::string s;
        is >> s;
        std::cout << s;
    }
    is.clear();
    return is;
}


int main()
{
    fun(std::cin);
}