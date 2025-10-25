// файл написан в кодировке UTF-8 без BOM

#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "Как вас зовут?\n";
    std::cin >> name;
    std::cout << "Привет, " << name << "!\n";

    return 0;
}