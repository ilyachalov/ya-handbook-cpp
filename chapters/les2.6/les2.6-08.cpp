#include <iostream>

int main()
{
    int x{ 42 };
    int y{ 13 };
    
    int* ptr;      // без инициализации, сейчас тут «случайный» адрес

    ptr = nullptr; // «нулевой» указатель

    ptr = &x;      // в ptr записан адрес переменной x
    std::cout << *ptr << '\n'; // 42

    ptr = &y;      // адрес, записанный в ptr, можно поменять,
                   // теперь в ptr записан адрес переменной y
    std::cout << *ptr << '\n'; // 13

    return 0;
}