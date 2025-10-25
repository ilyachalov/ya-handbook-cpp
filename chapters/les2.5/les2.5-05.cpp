#include <iostream>

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
    std::cout << sizeof(double) << '\n'; // 8
    std::cout << sizeof(Color) << '\n';  // 4 (фактически это int)
    std::cout << sizeof(Point) << '\n';  // 32

    // получается, что размер объекта типа Point не равен сумме размеров
    // его полей: 8 + 8 + 8 + 4 = 28; это происходит из-за так называемого
    // выравнивания: все поля выравниваются по размеру максимального поля,
    // то есть поле с цветом удлиняется на 4 байта, получается всего 32 байта

    return 0;
}