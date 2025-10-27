#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> words{ "one", "two", "three" };

    std::string& ref{ words[0] }; // ссылка на начальный элемент вектора

    words.clear(); // удалить все элементы вектора
                   // после этого ссылка ref указывает на несуществующий элемент

    // попытка обратиться к содержимому начального элемента вектора
    // через ссылку на него
    std::cout << ref << '\n'; // неопределенное поведение!

    return 0;
}