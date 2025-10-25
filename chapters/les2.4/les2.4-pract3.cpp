#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n{}; // количество гостей
    std::cin >> n;

    int k{};               // номера гостей
    std::vector<int> a(n); // номера мест, на которые сели гости
                           // k-й гость сел на a[k] место
    for (; k < n; ++k)
    {
        std::cin >> a[k];
    }

    // последовательно найти в векторе a[k] места от 1 до n включительно
    // выводить индексы найденных мест
    for (int seat_num{ 1 }; seat_num <= n; ++seat_num)
    {
        // индекс получить вычитанием из итератора найденного элемента
        // итератора начала вектора; единицу добавить потому, что гости
        // нумеруются не с нуля, а с единицы
        std::cout << std::find(a.begin(), a.end(), seat_num) - a.begin() + 1 << ' ';
    }
    std::cout << '\n';

    return 0;
}