#include <iostream>

int main()
{
    int a{ 7 };
    int b{ 3 };
    int q{ a / b }; // 2 (целочисленное деление)
    int i{ a % b }; // 1 (остаток от целочисленного деления)

    std::cout << a << '\n' << b << '\n' << q << '\n' << i << '\n';

    return 0;
}