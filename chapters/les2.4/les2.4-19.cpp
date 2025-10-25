#include <iostream>
#include <string>

// чтобы использовать функции starts_with и ends_with, нужно не только подключить
// библиотеку <string>, но и настроить компилятор на стандарт C++20,
// для MSVC (cl.exe) это параметр /std:c++20

int main()
{
    std::string phrase;
    std::getline(std::cin, phrase);

    if (phrase.starts_with("hello"))
    {
        std::cout << "Greeting\n";
    }

    if (phrase.ends_with("bye"))
    {
        std::cout << "Farewell\n";
    }

    return 0;
}