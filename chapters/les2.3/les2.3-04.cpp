#include <cstdint>  // для int64_t
#include <iostream> // для std::cout

int main()
{
    int64_t a{};
    int64_t b{};
    char operation{};

    std::cin >> a >> operation >> b;

    int64_t result{};

    if (operation == '+')
    {
        result = a + b;
    }
    else if (operation == '-')
    {
        result = a - b;
    }
    else if (operation == '*')
    {
        result = a * b;
    }
    else if (operation == '/' || operation == ':')
    {
        result = a / b;
    }
    else if (operation == '%') // остаток от целочисленного деления
    {
        result = a % b;
    }

    std::cout << result << '\n';

    return 0;
}