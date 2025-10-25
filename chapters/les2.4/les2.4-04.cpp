#include <vector>
#include <iostream>

int main()
{
    std::vector<int> data{ 1, 2, 3, 4, 5 };
    
    // неопределенное поведение: может произойти всё, что угодно
    std::cout << data[42] << '\n';

    std::cout << data.at(0) << '\n'; // выведется 1

    // произойдет исключение std::out_of_range, его можно будет
    // перехватить и обработать
    std::cout << data.at(42) << '\n';

    return 0;
}