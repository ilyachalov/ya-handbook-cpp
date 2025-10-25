#include <iostream>
#include <vector>

int main()
{
    size_t m{}; // число строк в матрице
    size_t n{}; // число столбцов в матрице
    std::cin >> m >> n;

    // создать матрицу matrix из m строк, каждая из которых — вектор из n нулей
    std::vector<std::vector<int>> matrix(m, std::vector<int>(n));

    // заполнить матрицу числами от пользователя
    for (size_t i{}; i != m; ++i)
    {
        for (size_t j{}; j != n; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }

    // вывести матрицу в консоль
    for (size_t i{}; i != m; ++i)
    {
        for(size_t j{}; j != n; ++j)
        {
            std::cout << matrix[i][j] << '\t';
        }
        std::cout << '\n';
    }

    return 0;
}