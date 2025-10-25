#include <iostream>
#include <utility>  // для std::pair

int main()
{
    std::pair<int, double> p{ 42, 3.14 };

    std::cout << p.first << '\n';
    std::cout << p.second << '\n';

    return 0;
}