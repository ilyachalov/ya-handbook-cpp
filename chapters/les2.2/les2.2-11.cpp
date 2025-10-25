#include <iostream>

int main()
{
    int a{ 6 };
    int b{ 4 };
    double q{ static_cast<double>(a) / b }; // 1.5
    double q2{ a * 1.0 / b }; // 1.5 (альтернатива строке выше)

    std::cout << q << '\n' << q2 << '\n';

    return 0;
}