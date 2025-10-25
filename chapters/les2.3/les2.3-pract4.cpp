#include <iostream>

int main()
{
    int month{};
    int year{};
    std::cin >> month >> year;

    bool leap_year{ false };  // високосный ли год?
    if (year % 400 == 0)      // год, номер которого кратен 400
    {
        leap_year = true;
    }
    else if (year % 100 == 0) // остальные годы, номер которых кратен 100
    {
        leap_year = false;
    }
    else if (year % 4 == 0)   // остальные годы, номер которых кратен 4
    {
        leap_year = true;
    }
    else                      // все остальные годы
    {
        leap_year = false;
    }

    int days{};
    switch (month)
    {
        case 2:
            days = (leap_year) ? 29 : 28;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
    }

    std::cout << days << '\n';

    return 0;
}