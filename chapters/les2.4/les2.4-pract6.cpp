#include <iostream>
#include <vector>

int main()
{
    int m{}; // количество строк поля
    int n{}; // количество столбцов поля
    int k{}; // количество мин
    std::cin >> m >> n >> k;

    // двумерный вектор для хранения игрового поля
    // элементы инициализированы нулями
    std::vector<std::vector<int>> field(m, std::vector<int>(n));

    // получить координаты мин от пользователя и записать мины на поле
    // мины обозначать числом -1
    for (int i{}; i != k; ++i)
    {
        int row{}; // номер строки поля
        int col{}; // номер столбца поля
        std::cin >> row >> col;
        // вычесть из координат единицу, т.к. пользователь нумерует,
        // начиная с единицы, а не с нуля
        row--;
        col--;
        
        // записать мину на поле
        field[row][col] = -1;

        // добавить в соседние с миной клетки поля по единице,
        // если это не поле с другой миной, и если там есть поля
        // сверху, север
        if (row - 1 >= 0)
            if (field[row - 1][col] != -1) field[row - 1][col] += 1;
        // сверху, северо-запад
        if (row - 1 >= 0 && col - 1 >= 0)
            if (field[row - 1][col - 1] != -1) field[row - 1][col - 1] += 1;
        // сверху, северо-восток
        if (row - 1 >= 0 && col + 1 < n)
            if (field[row - 1][col + 1] != -1) field[row - 1][col + 1] += 1;
        // слева, запад
        if (col - 1 >= 0)
            if (field[row][col - 1] != -1) field[row][col - 1] += 1;
        // справа, восток
        if (col + 1 < n)
            if (field[row][col + 1] != -1) field[row][col + 1] += 1;
        // снизу, юг
        if (row + 1 < m)
            if (field[row + 1][col] != -1) field[row + 1][col] += 1;
        // снизу, юго-запад
        if (row + 1 < m && col - 1 >= 0)
            if (field[row + 1][col - 1] != -1) field[row + 1][col - 1] += 1;
        // снизу, юго-восток
        if(row + 1 < m && col + 1 < n)
            if (field[row + 1][col + 1] != -1) field[row + 1][col + 1] += 1;
    }

    // вывести игровое поле
    for (int i{}; i != m; ++i)
    {
        for (int j{}; j != n; ++j)
        {
            if (field[i][j] == -1)
            {
                std::cout << '*';
            }
            else
            {
                std::cout << field[i][j];
            }

            if (j < n - 1) std::cout << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}