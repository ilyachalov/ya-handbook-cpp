#include <vector>
#include <iostream>

int main()
{
    std::vector<int> data{ 1, 2, 3, 4, 5 };
    std::cout << data.front() << '\n'; // то же, что data[0]
    std::cout << data.back() << '\n';  // то же, что data[data.size() - 1]

    if (!data.empty())
    {
        // вектор не пуст, с ним можно работать
    }

    return 0;
}