#include <iostream>

int main()
{
    int sum{ 0 };

    while (true) // бесконечный цикл
    {
        int x{};
        std::cin >> x;
        
        if (x == 0)
        {
            break; // выход из бесконечного цикла
        }

        sum += x;
    }

    std::cout << sum << '\n';

    return 0;
}