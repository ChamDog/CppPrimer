#include <iostream>

//decltype会带上const与&
//decltype(())结果是引用
//decltype(r+0)
//decltype(*p)结果是引用


int main()
{
    int a = 3, b = 4;
    decltype(a) c = b;
    decltype((a)) d = a;

    decltype(a = b) e = a;
}