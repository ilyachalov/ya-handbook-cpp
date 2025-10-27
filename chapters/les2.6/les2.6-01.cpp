#include <iostream>
#include <string>

int main()
{
    std::string s1{ "Это элементарно, дорогой Ватсон!" };
    std::string s2{ s1 };

    s1.clear(); // при этом s2 никак не изменится

    // проверим
    std::cout << s1 << '\n'; // пустая строка
    std::cout << s2 << '\n'; // Это элементарно, дорогой Ватсон!

    return 0;
}