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
    std::vector<std::string> c_langs;
    auto it = find_if(langs.begin(), langs.end(), [](const std::string& lang) {return lang[0] == 'C';});
    std::cout << it - langs.begin() << std::endl;
    // итератор для нахождения элемента по условию и позицию этого элемента

    std::set<int> s1{1, 6, 8, 9};
    auto it_2 = s1.find(8);
    PrintRange(next(it_2), s1.end());
    // специальная функция next, которая помогает вам сделать из + 1 с помощью ++,
    // не меняя саму переменную it_2. По сути, это аналог it_2 + 1 для множества

    // функция prev, которая делает минус-минус, не меняя исходную переменную, возвращает предыдущий итератор.
    PrintRange(prev(it_2), end(s1));

    return 0;
}
