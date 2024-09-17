#include <iostream>
#include <string>

//如果要识别空格呢

int main()
{
    //3.2 从标准输入中一次读入一行
    std::string line_3_2;
    std::cout << "3.2 input a line:";
    if (std::getline(std::cin, line_3_2))
    {
        std::cout << line_3_2 << "\t";
    }
    std::cout << std::endl << std::endl;

    //3.2 从标准输入中一次读取一个
    std::string word_3_3;
    std::cout << "3.2 input some words(EOF to back):";
    while ((std::cin >> word_3_3) && word_3_3 != "EOF")
    {
        std::cout << word_3_3 << "\t";
    }
    std::cout << std::endl << std::endl;

    //3.4 比较相等与等长
    std::string str1_3_4, str2_3_4;
    std::cout << "3.4 input two string:";
    std::cin >> str1_3_4 >> str2_3_4;
    if (str1_3_4 == str2_3_4) { std::cout << "equal" << std::endl; }
    else { std::cout << (str1_3_4 > str2_3_4 ? str1_3_4 : str2_3_4) << std::endl; }
    if (str1_3_4.size() == str2_3_4.size()) { std::cout << "same size" << std::endl; }
    else { std::cout << (str1_3_4.size() > str2_3_4.size() ? str1_3_4 : str2_3_4) << std::endl; }
    std::cout << std::endl;

    //3.5拼字符
    std::string str,str_3_5;
    std::cout << "3.5 input some string(EOF to back):";
    while ((std::cin >> str_3_5) && str_3_5 != "EOF")
    {
        str = str + str_3_5 + " ";
    }
    std::cout << str << std::endl;
}

