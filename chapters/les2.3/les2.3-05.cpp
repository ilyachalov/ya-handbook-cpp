#include <cstdint>  // для int64_t
#include <iostream> // для std::cout, std::cin

int main()
{
    int64_t a{};
    int64_t b{};
    char operation{};

    std::cin >> a >> operation >> b;

    int64_t result; // без инициализации

    switch (operation)
    {
        case '+':
            result = a + b;
            break; // если не написать этот break, программа пойдет дальше в код
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
        case ':':
            result = a / b;
            break;
        case '%':
            result = a % b;
            break;
        default:  // случай, когда ни один case не сработал
            result = 0;
    }

    std::cout << result << '\n';

    return 0;
}