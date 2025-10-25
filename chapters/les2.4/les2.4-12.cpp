#include <vector>

int main()
{
    std::vector<int> data{ 1, 2, 3, 4, 5 };

    data.reserve(10); // поменяли резерв, но размер вектора остался равным пяти

    data.resize(3);   // удалили последние элементы со значениями 4 и 5
    data.resize(6);   // получили вектор 1, 2, 3, 0, 0, 0

    return 0;
}