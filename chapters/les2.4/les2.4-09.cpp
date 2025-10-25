#include <iostream>
#include <vector>

int main()
{
    int x{};
    std::vector<int> data;

    while (std::cin >> x)  // читаем числа, пока не закончится ввод
    {
        data.push_back(x); // добавляем очередное число в вектор
    }

    // пока вектор не пуст и последний элемент равен нулю
    while (!data.empty() && data.back() == 0)
    {
        data.pop_back(); // удаляем последний элемент, содержащий ноль
    }

    return 0;
}