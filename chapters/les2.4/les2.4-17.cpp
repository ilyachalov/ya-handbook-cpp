#include <iostream>
#include <string>

int main()
{
    std::string s{ "Some string" };

    // добавление символа и/или другой строки в конец нашей строки
    s += ' ';               // добавление символа
    s += "functions";       // добавление другой строки
    std::cout << s << '\n'; // Some string functions

    // получение подстроки нашей строки
    std::string sub1{ s.substr(5, 6) }; // с 5-й позиции, шесть символов: string
    std::string sub2{ s.substr(12) };   // с 12-й позиции и до конца: functions

    // поиск символа или подстроки
    size_t pos1{ s.find(' ') };           // позиция первого пробела: 4
    size_t pos2{ s.find(' ', pos1 + 1) }; // позиция следующего пробела: 11
    size_t pos3{ s.find("str") };         // позиция подстроки "str": 5
    size_t pos4{ s.find("#") };           // позиция подстроки "#": std::string::npos

    // значение std::string::npos означает, что указанная подстрока не найдена

    return 0;
}