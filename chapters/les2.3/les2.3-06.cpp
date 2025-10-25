#include <iostream>

int main()
{
    std::string name;
    std::cin >> name;

    switch (name) // ошибка компиляции
    {
        case "Alice":
            std::cout << "Hello, Alice!\n";
            break;
    }

    return 0;
}