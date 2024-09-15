#include <iostream>
#include <math.h>
int main()
{
    //1.9
    int sum = 0, i = 50;
    while (i <= 100) { sum += i++; }
    std::cout << sum << std::endl;

    //1.10
    int j = 10;
    while (j >= 0) { std::cout << j--; }
    std::cout << std::endl;

    //1.11
    int v1 = 0, v2 = 0;
    std::cout << "Input:"; std::cin >> v1 >> v2;
    int k = abs(v1 - v2) + 1;
    while ((k--) > 0)
    {
        std::cout << v1 << " ";
        v1 += v1 < v2 ? 1 : -1;
    }
}


