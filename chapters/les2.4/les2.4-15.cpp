#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> data{ 3, 1, 4, 1, 5, 9, 2, 6 };

    // сортировка диапазона элементов в векторе
    // для сортировки по убыванию — обратные итераторы
    std::sort(data.rbegin(), data.rend());

    // вывести вектор в консоль
    for (size_t i{}; i != data.size(); ++i)
    {
        std::cout << data[i] << ' ';
    }
    std::cout << '\n';

    // получим вектор 9, 6, 5, 4, 3, 2, 1, 1

    return 0;
}