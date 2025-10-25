#include <iostream>
#include <string>

int main()
{
    std::string password;
    std::cin >> password;

    int capital_letter{}; // класс больших букв
    int small_letter{};   // класс маленьких букв
    int digit{};          // класс цифр
    int other_char{};     // класс прочих символов

    for (size_t i{}; i != password.size(); ++i)
    {
        // проверка: состоит ли пароль из символов ASCII
        // с кодами от 33 до 126 включительно
        if (password[i] < 33 || password[i] > 126)
        {
            std::cout << "NO\n";
            return 0;
        }

        // определить класс символа и запомнить использованные классы
        // большие буквы
        if (password[i] >= 65 && password[i] <= 90)
        {
            capital_letter = 1;
        }
        // маленькие буквы
        else if (password[i] >= 97 && password[i] <= 122)
        {
            small_letter = 1;
        }
        // цифры
        else if (password[i] >= 48 && password[i] <= 57)
        {
            digit = 1;
        }
        // прочие символы
        else
        {
            other_char = 1;
        }
    }

    // проверка: в пароле должны присутствовать любые 3 класса из четырех
    if (capital_letter + small_letter + digit + other_char < 3)
    {
        std::cout << "NO\n";
        return 0;
    }

    // проверка: длина пароля должна быть не короче 8 и не длиннее 14 символов
    if (password.size() < 8 || password.size() > 14)
    {
        std::cout << "NO\n";
        return 0;
    }

    // пароль — корректный
    std::cout << "YES\n";

    return 0;
}