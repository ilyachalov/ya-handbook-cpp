#include <iostream>

int main()
{
    char c{ 'A' };
    std::cout << c << '\n'; // A

    c += 25;
    std::cout << c << '\n'; // Z

    return 0;
}