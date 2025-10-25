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
    Point point1; // по умолчанию координаты точки — нулевые,
                  // цвет не проинициализирован
    point1.color = Color::Blue;

    // явная инициализация
    Point point2{ 1.4, -2.2, -3.98, Color::Red };

    // обращение к полям объекта типа Point (структура)
    point2.z = 32;
    point2.x += 2;

    return 0;
}