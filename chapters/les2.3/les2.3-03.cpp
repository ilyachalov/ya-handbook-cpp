#include <cmath>    // для std::abs
#include <iostream> // для std::cout

int main()
{
    double delta{ 0.000001 }; // погрешность, которую мы можем допустить
    double x{ 0.1 };
    double y{ 0.2 };
    double sum{ x + y };

    if (std::abs(sum - 0.3) < delta)
    {
        std::cout << "Равно ";
    }
    else
    {
        std::cout << "Не равно ";
    }
    std::cout << sum << '\n';

    return 0;
}