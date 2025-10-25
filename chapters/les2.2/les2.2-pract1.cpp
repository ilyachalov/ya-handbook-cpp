#include <iostream>

int main()
{
    //std::cout << "Input length in centimeters: ";
    double x{};
    std::cin >> x;

    //std::cout << "Length in inches: " << x / 2.54 << '\n';
    std::cout << x / 2.54 << '\n';

    return 0;
}