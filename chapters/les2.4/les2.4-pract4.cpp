#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    // получить строки от пользователя, сохранить в вектор строк
    std::vector<std::string> strings;
    std::string str;
    // функция getline считывает строки с пробелами
    while (std::getline(std::cin, str))
    {
        strings.push_back(str);
    }

    // сортировка вектора по убыванию с помощью обратных итераторов
    std::sort(strings.rbegin(), strings.rend());

    // вывести результат
    for (std::string string : strings)
    {
        std::cout << string << '\n';
    }

    return 0;
}