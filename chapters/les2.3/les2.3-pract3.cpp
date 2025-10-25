#include <iostream>

int main()
{
    int year{};
    std::cin >> year;

    if (year % 400 == 0)      // год, номер которого кратен 400
    {
        std::cout << "YES\n";
    }
    else if (year % 100 == 0) // остальные годы, номер которых кратен 100
    {
        std::cout << "NO\n";
    }
    else if (year % 4 == 0)   // остальные годы, номер которых кратен 4
    {
        std::cout << "YES\n";
    }
    else                      // все остальные годы
    {
        std::cout << "NO\n";
    }

    return 0;
}