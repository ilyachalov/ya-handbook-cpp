#include <iostream>
#include <cmath>    // для std::abs

int main()
{
    int col1{};
    int row1{};
    int col2{};
    int row2{};

    std::cin >> col1;
    std::cin >> row1;
    std::cin >> col2;
    std::cin >> row2;

    // если номер колонки не изменился, значит ферзь сходил по вертикали
    if (col1 == col2)
    {
        std::cout << "YES\n";
        return 0;
    }

    // если номер строки не изменился, значит ферзь сходил по горизонтали
    if (row1 == row2)
    {
        std::cout << "YES\n";
        return 0;
    }

    // если номера колонок и строк изменились по модулю на одно и то же число,
    // значит ферзь сходил по диагонали
    if (std::abs(col1 - col2) == std::abs(row1 - row2))
    {
        std::cout << "YES\n";
        return 0;
    }

    // если вышеописанные случаи не подходят, значит это случай ввода клетки,
    // в которую ферзь не может перейти
    std::cout << "NO\n";

    return 0;
}