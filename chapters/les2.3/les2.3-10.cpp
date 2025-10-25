#include <iostream>

int main()
{
    int n{ 1 };

    do
    {
        std::cout << n << '\t' << n * n << '\n';
        n++;
    }
    while (n <= 10);

    return 0;
}