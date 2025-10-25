#include <iostream>

int main()
{
    int x{};
    std::cin >> x;

    if (x <= 0)
    {
        std::cout << "ноль или отрицательное\n";
    }
    else if (x == 1)
    {
        std::cout << "один\n";
    }
    else if (x == 2)
    {
        std::cout << "два\n";
    }
    else
    {
        std::cout << "много\n";
    }

    return 0;
}