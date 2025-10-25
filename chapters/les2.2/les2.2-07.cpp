// файл набран в кодировке UTF-8 без BOM

#include <iostream>
#include <limits>

int main()
{
    std::cout << "минимальное значение: " << std::numeric_limits<int>::min() << '\n'
              << "максимальное значение: " << std::numeric_limits<int>::max() << '\n';

    return 0;
}