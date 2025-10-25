#include <string>
#include <iostream>

int main()
{
    std::string a{ "Hello, " };
    std::string b{ "world!" };
    std::string c{ a + b };

    std::cout << c << '\n';

    return 0;
}