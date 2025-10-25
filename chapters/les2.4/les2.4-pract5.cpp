#include <iostream>
#include <string>

int main()
{
    // получить строку от пользователя
    std::string str;
    std::getline(std::cin, str); // с пробелами

    // удалить из строки пробелы
    std::string temp;
    for (size_t i{}; i != str.size(); ++i)
    {
        if (str[i] != ' ')
        {
            temp += str[i];
        }
    }
    str = temp;

    // сравнить попарно символы с начала и с конца строки
    // если в какой-либо из пар символы не равны друг другу, то это не палиндром
    for (size_t i{}; i != str.size() / 2; ++i)
    {
        if (str[i] != str[str.size() - 1 - i])
        {
            std::cout << "NO\n";
            return 0;
        }
    }

    // это палиндром, в том числе пустая строка или один символ
    std::cout << "YES\n";

    return 0;
}