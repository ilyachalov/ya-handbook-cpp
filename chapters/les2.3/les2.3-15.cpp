#include <iostream>

int main()
{
    int sum{};
    int x{};

    while (std::cin >> x)
    {
        sum += x;
    }

    std::cout << sum << '\n';

    return 0;
}