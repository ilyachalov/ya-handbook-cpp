#include <iostream>
#include <tuple>    // для std::tuple (кортеж)

enum class Color
{
    White,
    Red,
    Orange,
    Blue,
};

struct Point
{
    double x{ 0.0 }; // координаты точки в трехмерном пространстве
    double y{ 0.0 };
    double z{ 0.0 };
    Color color;     // цвет точки
};

int main()
{
    // для инициализатора с обозначением понадобится компиляция с параметром,
    // указывающим желаемый стандарт C++, например /std:c++20 для MSVC

    std::tuple<int, double, Point> t{ 42, 3.14, { .color{ Color::Orange } } };

    // у кортежа нет полей .first и .second, как у пары, но есть
    // функция std::get<>, которая принимает в угловых скобках индекс
    // поля (индексация — с нуля)

    // чтение полей кортежа
    std::cout << std::get<0>(t) << '\n';   // 42
    std::cout << std::get<1>(t) << '\n';   // 3.14
    std::cout << std::get<2>(t).x << '\n'; // 0.0

    // запись в поле кортежа
    std::get<2>(t).color = Color::Red;

    return 0;
}