#include <iostream>

int main()
{
    again: // метка — произвольное имя с двоеточием

    std::cout << "Сколько вам лет?\n";
    int age{};
    std::cin >> age;

    if (age < 0 || age >= 128)
    {
        std::cout << "Неправильный возраст...\n";
        goto again; // безусловный переход в место, помеченное меткой
    }

    std::cout << "Ваш возраст — " << age << ".\n";

    // ...

    return 0;
}