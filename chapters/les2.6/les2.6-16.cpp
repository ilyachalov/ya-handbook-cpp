#include <iostream>
#include <vector>

int main()
{
    // вектор из миллиона строк, каждая длиной 10 тысяч символов
    const size_t m{ 1'000'000 };
    const size_t n{ 10'000 };
    std::vector<std::string> v(m);

    // перебор строк в векторе для изменения
    for (auto& row: v) // обычная ссылка на строку
    {
        row.resize(n, '@');
    }

    // перебор строк в векторе для чтения
    size_t sum{};
    for (const auto& row: v) // константная ссылка на строку
    {
        sum += row.size();
    }

    std::cout << sum << '\n';

    return 0;
}