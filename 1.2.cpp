#include <iostream>
#include <iomanip>

int main()
{
    //1.3
    std::cout << "Hello World!\n";
    //1.4 1.5
    double n1 = 0, n2 = 0;
    std::cout << "Input:"; std::cin >> n1 >> n2;
    //知识点：<< 和 >> 运算符都是从左向右运算，运算结果是左侧对象

    /*
    *  需要头文件 #include <iomanip>
    *  setprecision() 来用来保存有效数字，fixed 和 setprecision() 一起用就变成保存小数点后有效数字。
    *  fixed 可以通过 cout.unsetf(ios::fixed); (20行)这段代码关掉。不然会一直开着。
    *  fixed 有个地方需要注意的是可以保存的有效数字包括0，不开 fixed 的话，即使保存3个有效数字，小数点后的0也会自动省略。
    *  即 1.2 要是 setprecision(3) 结果还是1.2 而不是1.20.所以通常想要像在 printf() 中一样使用，都是要开 fixed 的！
    *  原文链接：https ://blog.csdn.net/wohu1104/article/details/119490291
    */

    std::cout.setf(std::ios::fixed);
    std::cout << "n1+n2=" << std::fixed << std::setprecision(2) << n1 + n2 << "\t"
              << "n1*n2=" << std::fixed << std::setprecision(2) << n1 * n2 << std::endl;
    std::cout.unsetf(std::ios::fixed);
}