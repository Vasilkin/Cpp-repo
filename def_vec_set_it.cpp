#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <string>
#include <vector>
#include <iterator>


template <typename It>
void PrintRange(It range_begin, It range_end)
{
    for (auto it = range_begin; it != range-end; ++it)
    {
        std::cout << *it << ',';
    }
    std::cout << std::endl;
}


int main()
{
    std::vector<std::string> langs{"Python", "C++", "C", "Java", "C#"};
    return 0;
}