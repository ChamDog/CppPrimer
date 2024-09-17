#include <iostream>
#include <vector>

int main()
{
    /*int i;
    std::vector<int>IntVector;
    std::cout << "Input int:";
    while (std::cin >> i) { IntVector.push_back(i); }*/

    std::string s;
    std::vector<std::string>StrVector;
    std::cout << "Input string(EOF to back):";
    while ((std::cin >> s) && s!="EOF") { StrVector.push_back(s); }

    //仍然要分开来......
}