#include <iostream>

int main()
{
    int i = 0, sum = 0;
    while (std::cin >> i)//知识点，正确输入判断为1，否则（读到文件结束或无效输入）
    {
        sum += i;
    }
    std::cout << sum;
}
