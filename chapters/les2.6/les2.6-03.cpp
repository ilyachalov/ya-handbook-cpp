#include <iostream>
#include <string>

int main()
{
    std::string s1{ "Это элементарно, дорогой Ватсон!" };
    std::string& s2{ s1 }; // это ссылка

    s1.clear();

    std::cout << s2.size() << '\n'; // выведет 0

    return 0;
}