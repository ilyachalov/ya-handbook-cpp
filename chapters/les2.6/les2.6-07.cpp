#include <iostream>

int main()
{
    int x{ 1 };
    int y{ 2 };
    int z{ 3 };

    std::cout << &x << '\n';
    std::cout << &y << '\n';
    std::cout << &z << '\n';

    return 0;
}