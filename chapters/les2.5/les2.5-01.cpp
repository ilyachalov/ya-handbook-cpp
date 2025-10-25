// создание перечисления
enum class Color{
    White,
    Red,
    Orange,
    Blue,
};

int main()
{
    // создание переменных типа (класса) Color (перечисление, объявленное выше)
    Color color1{ Color::Red };
    Color color2{ Color::Blue };

    // присваивание значения перечисления переменной другого типа

    //int value1{ color2 }; // неявное преобразование невозможно,
                            // синтаксическая ошибка
    int value2{ static_cast<int>(color2) }; // корректно

    return 0;
}