#include <iostream>
#include <string>

int main()
{
    // получить слово от пользователя
    std::string word;
    std::cin >> word;

    std::string res_word; // результат: 4-буквенный код по алгоритму Soundex

    // первая буква слова сохраняется
    res_word += word[0];
    word.erase(0, 1);

    // в остальной части слова буквы [a, e, h, i, o, u, w, y] удаляются
    std::string temp;
    std::string del_chars{ "aehiouwy" };
    for (size_t i{}; i != word.size(); ++i)
    {
        if (del_chars.find(word[i]) == std::string::npos)
        {
            temp += word[i];
        }
    }
    word = temp;

    // оставшиеся буквы заменяются на цифры от 1 до 6,
    // похожим по звучанию буквам соответствуют одинаковые цифры
    std::string sound1{ "bfpv" };
    std::string sound2{ "cgjkqsxz" };
    std::string sound3{ "dt" };
    std::string sound4{ "l" };
    std::string sound5{ "mn" };
    std::string sound6{ "r" };
    for (size_t i{}; i != word.size(); ++i)
    {
        if (sound1.find(word[i]) != std::string::npos)
        {
            word[i] = '1';
        }
        else if (sound2.find(word[i]) != std::string::npos)
        {
            word[i] = '2';
        }
        else if (sound3.find(word[i]) != std::string::npos)
        {
            word[i] = '3';
        }
        else if (sound4.find(word[i]) != std::string::npos)
        {
            word[i] = '4';
        }
        else if (sound5.find(word[i]) != std::string::npos)
        {
            word[i] = '5';
        }
        else if (sound6.find(word[i]) != std::string::npos)
        {
            word[i] = '6';
        }
    }

    // последовательность идущих подряд одинаковых цифр сокращается до одной
    temp = "";
    if (!word.empty())
    {
        temp = word[0]; // первую цифру оставить
        // начать проверку повторяемости со второй цифры
        for (size_t i{ 1 }; i != word.size(); ++i)
        {
            // оставить цифру, если она не равна предыдущей
            if (word[i] != word[i - 1])
            {
                temp += word[i];
            }
        }
        word = temp;
    }

    // итоговая строка обрезается до первых четырех символов
    res_word += word; // помним про сохраненный ранее символ из начала слова
    if (res_word.size() > 4)
    {
        res_word.erase(4, res_word.size() - 4);
    }

    // если длина строки получилась меньше 4, в конце добавить нули
    while(res_word.size() < 4)
    {
        res_word += '0';
    }

    // вывод результата
    std::cout << res_word << '\n';

    return 0;
}