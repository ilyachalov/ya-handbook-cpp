#include <vector>
#include <iostream>

int main()
{
    std::vector<int> data{ 1, 2, 3, 4, 5 };
    int a{ data[0] }; // начальный элемент вектора
    int b{ data[4] }; // последний элемент вектора (в нем пять элементов)
    data[2] = -3;     // меняем значение 3 элемента на значение -3

    std::cout << data.size() << '\n'; // количество элементов в векторе

    return 0;
}