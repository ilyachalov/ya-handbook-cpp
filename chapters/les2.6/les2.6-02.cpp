#include <iostream>

int main()
{
    int x{ 42 };
    int& ref{ x }; // ссылка на x

    ++x;
    std::cout << ref << '\n'; // 43

    return 0;
}