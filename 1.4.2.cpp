#include <iostream>

int main()
{
    //1.9
    int sum = 0;
    for (int i = 50; i <= 100; i++) { sum += i; }
    std::cout << sum << std::endl;
    
    //1.10
    for (int i = 10; i >= 0;)std::cout << i--;
    std::cout << std::endl;

    //1.11
    int v1 = 0, v2 = 0;
    std::cout << "Input:"; std::cin >> v1 >> v2;
    if (v1 <= v2)for (int i = v1; i <= v2; i)std::cout << i++ << " ";
    else for (int i = v1; i >= v2; i)std::cout << i-- << " ";
}

