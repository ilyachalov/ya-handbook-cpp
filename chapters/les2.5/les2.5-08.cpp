#include <iostream>
#include <utility>

int main()
{
    // демонстрация «распаковки», это называют structured binding

    // для компиляции потребуется параметр компилятора, обеспечивающий
    // стандарт C++ не ниже 17 версии, например, /std:c++17 для MSVC

    std::pair<std::string, int> p{ "hello", 42 };
    auto [word, freq]{ p };

    // тип auto вынуждены использовать, так как поля пары могут быть
    // разных типов

    std::cout << word << ' ' << freq << '\n';

    return 0;
}