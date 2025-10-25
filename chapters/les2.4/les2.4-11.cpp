#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> words;

    size_t words_count{};
    std::cin >> words_count;

    // размер вектора остается нулевым, меняется только резерв:
    words.reserve(words_count);

    for (size_t i{}; i != words_count; ++i)
    {
        std::string word;
        std::cin >> word;
        // все добавления будут дешевыми, без реаллокаций
        words.push_back(word);
    }

    return 0;
}