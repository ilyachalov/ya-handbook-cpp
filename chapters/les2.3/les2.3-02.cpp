#include <iostream>

int main()
{
    double x{ 0.1 };
    double y{ 0.2 };

    if (x + y == 0.3)
    {
        std::cout << "Равно ";
    }
    else
    {
        std::cout << "Не равно ";
    }
    std::cout << x + y << '\n';

    return 0;
}