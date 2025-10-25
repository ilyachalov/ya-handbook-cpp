#include <iostream>

int a{ 1 };

int main()
{
    int b{ 2 };

    {
        int c{ 3 };
        std::cout << a << ' ' << b << ' ' << c << '\n';
    }

    std::cout << c << '\n'; // ошибка компиляции

    return 0;
}