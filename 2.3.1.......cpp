#include <iostream>

/*
*   基于其他类型创造的类型
*   数据类型+声明符
*/

int main()
{
    int i, & ri = i;//必须初始化
    i = 5; ri = 10;
    std::cout << i << " " << ri;

    int temp_int = 10;
    const int& rti = temp_int;
    //int& r2 = rti;//别这样做，其将消解const？？！
}
