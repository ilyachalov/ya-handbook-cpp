#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> data{ 3, 1, 4, 1, 5, 9, 2, 6 };

    // сортировка диапазона элементов в векторе
    // в данном случае — от начала до конца
    std::sort(data.begin(), data.end());

    // вывести вектор в консоль
    for (size_t i{}; i != data.size(); ++i)
    {
        std::cout << data[i] << ' ';
    }
    std::cout << '\n';

    // получим вектор 1, 1, 2, 3, 4, 5, 6, 9

    return 0;
}