#include <iostream>

int main()
{
    int x{ 1 };
    std::cout << x << '\n';     // 1

    {
        int x{ 2 };
        std::cout << x << '\n'; // 2
    }

    std::cout << x << '\n';     // 1

    return 0;
}