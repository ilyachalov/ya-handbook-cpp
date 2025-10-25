#include <iostream>

int main()
{
    int x;
    std::cout << x << '\n'; // неопределенное поведение

    int y;
    std::cin >> y;

    return 0;
}