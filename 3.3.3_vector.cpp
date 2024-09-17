#include <iostream>
#include <vector>
#include <string>

int main()
{
    //3.17
    std::vector<std::string>StrVector;
    std::string s;
    std::cout << "input words(EOF to back):";
    while ((std::cin >> s)&&s!="EOF") 
    {
        StrVector.push_back(s); 
    }
    for (auto& s : StrVector)
    {
        for (auto& c : s)
        {
            c = ((c > 'A') && (c < 'Z')) ? c : c + ('A' - 'a');
        }
    }
    for (auto& s : StrVector)
    {
        std::cout << s << '\t';
    }
    std::cout << std::endl;

    ////3.18 以下代码将在运行时出错
    //std::vector<int>iv;
    //iv[0] = 42;

    //3.19
    std::vector<int>v1{ 42,42,42,42,42,42,42,42,42,42 };
    std::vector<int>v2(10, 42);

    //3.20
    std::vector<int>vi{1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int>::size_type pl = 0, pr = vi.size()-1;//别忘了减一
    while (pl <= pr)
    {
        std::cout << vi[pl] + vi[pr] << " ";
        pl++, pr--;
    }
    if (pl == pr)
    {
        std::cout << vi[pl] + vi[pr] << " ";
    }
}