#include <iostream>

//变量只能被定义一次，但可以多次声明！

extern int global_var = 0;

int main()
{
    extern int global_var;
}
