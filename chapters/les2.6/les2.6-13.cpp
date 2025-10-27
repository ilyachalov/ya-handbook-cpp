int main()
{
    const int cx{ 42 };

    int& ref{ cx };         // ошибка компиляции: константность нельзя убрать
    const int& cref{ cx };  // корректно

    int* ptr{ &cx };        // ошибка компиляции: константность нельзя убрать
    const int* cptr{ &cx }; // корректно

    return 0;
}