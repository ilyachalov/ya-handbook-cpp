#include <iostream>
#include <vector>

int main()
{
    //std::vector<int> data{ 1, 2, 3, 3, 5 };
    std::vector<int> data; // пустой вектор без элементов

    // нижележащий код будет работать некорректно на пустом векторе

    // итерация по всем элементам, кроме последнего
    for (size_t i{ 0 }; i < data.size() - 1; i++)
    {
        if (data[i] == data[i + 1])
        {
            std::cout << "Повторяющееся значение: " << data[i] << '\n';
        }
    }

    return 0;
}