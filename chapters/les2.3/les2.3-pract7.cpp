#include <iostream>

int main()
{
    int n{};
    std::cin >> n;

    double sum{};
    double sign{ -1.0 };
    for (int i{ 1 }; i <= n; i++)
    {
        sign *= -1.0; // в каждой итерации меняем знак на противоположный
        sum += sign / i;
    }

    std::cout << sum << '\n';

    return 0;
}