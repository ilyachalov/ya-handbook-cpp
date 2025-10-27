#include <iostream>

int main()
{
    int x{ 42 };
    int y{ 13 };
    int& ref{ x };

    ref = y; // ссылка останется привязанной к x, значение x поменяется

    std::cout << x << '\n';   // 13
    std::cout << y << '\n';   // 13
    std::cout << ref << '\n'; // 13

    return 0;
}