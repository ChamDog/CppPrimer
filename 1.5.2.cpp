#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include "Sales_item.h"

//测试数据在同一文件夹下
//数据输入完成后，需要输入"- -"让16行循环停止

int main()
{
    std::vector<std::string> ISBNVector;//存书号
    std::map<std::string, int> ISBNMap;//记数目
    Sales_item sin;
    while (std::cin >> sin)
    {
        auto ISBNIt = std::find(ISBNVector.begin(), ISBNVector.end(), sin.isbn());
        if (ISBNIt == ISBNVector.end())
        {
            ISBNVector.push_back(sin.isbn());
            ISBNMap[sin.isbn()] = 1;
        }
        else ISBNMap[sin.isbn()] += 1;
    }
    for (auto i : ISBNVector)
    {
        std::cout << i << " " << ISBNMap[i] << std::endl;
    }
}

