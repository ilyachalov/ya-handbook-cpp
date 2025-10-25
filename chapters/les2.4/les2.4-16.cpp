#include <iostream>
#include <algorithm> // для сортировки
#include <vector>

// чтобы использовать этот метод сортировки, нужно не только подключить
// библиотеку <algorithm>, но и настроить компилятор на стандарт C++20,
// для MSVC (cl.exe) это параметр /std:c++20

int main()
{
    std::vector<int> data{ 3, 1, 4, 1, 5, 9, 2, 6 };

    // способ сортировки доступный со стандарта C++20
    // передать сам вектор
    std::ranges::sort(data); // сортировка по возрастанию

    // вывести вектор в консоль
    for (size_t i{}; i != data.size(); ++i)
    {
        std::cout << data[i] << ' ';
    }
    std::cout << '\n';

    // получим вектор 1, 1, 2, 3, 4, 5, 6, 9

    std::ranges::sort(data, std::ranges::greater()); // сортировка по убыванию

    // вывести вектор в консоль
    for (size_t i{}; i != data.size(); ++i)
    {
        std::cout << data[i] << ' ';
    }
    std::cout << '\n';

    // получим вектор 9, 6, 5, 4, 3, 2, 1, 1

    return 0;
}