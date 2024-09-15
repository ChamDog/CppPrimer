#include <iostream>
#include <vector>
#include <string>
#include "Sales_item.h"
#define LINE "--------------------\n"

//测试数据在同一文件夹下
//以下各段可以单独运行，不要一并运行

int main()
{
    ////1.20 数据输入完成后，需要输入"- -"让14行循环停止
    //Sales_item s;
    //std::vector<Sales_item>vs;
    //while (std::cin >> s)vs.push_back(s);
    //std::cout << LINE;
    //for (auto i : vs) { std::cout << i << std::endl; }
    //std::cout << std::endl;

    ////1.21
    //Sales_item s1, s2;
    //std::cin >> s1 >> s2;
    //if (s1.isbn() == s2.isbn())std::cout << LINE << s1 + s2;
    //std::cout << std::endl;

    //1.22 以下程序会统计你输入的所有数据中，从开头开始 连续相同书号 的数个销售记录之和
    Sales_item s_obj,s_input;
    std::cin >> s_obj; std::string objNo = s_obj.isbn();
    while ((std::cin >> s_input) && (s_input.isbn() == objNo))
    {
        s_obj += s_input;
    }
    std::cout << LINE << s_obj;
}

