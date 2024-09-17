#include <iostream>
#include <string>
#include <cctype>

int main()
{
    //3.6 3.7
    std::string test_3_6("TestString");
    for (auto& i : test_3_6) { i = 'X'; }
    std::cout << test_3_6<<std::endl;
    for (char& i : test_3_6) { i = 'Y'; }
    std::cout << test_3_6<<std::endl;

    //3.8
    std::string::size_type cnt = test_3_6.size();
    for (int i = 0; i < cnt; i++) { test_3_6[i] = 'Z'; }
    std::cout << test_3_6 << std::endl;
    int i = 0; while (i < cnt) { test_3_6[i] = 'A'; i++; }
    std::cout << test_3_6 << std::endl;

    //3.9
    std::string s;
    std::cout << s[0] << std::endl;

    //3.10
    std::string sen, temp;
    std::cout << "input a sentence(no tap):"; std::cin >> sen;
    for (auto c : sen)
    {
        if (!ispunct(c)) { temp += c; }
    }
    sen = temp;
    std::cout << sen;

    //3.11
    //const std::string cs("Keep out!");
    //for (auto& i : cs) { i++; }
}