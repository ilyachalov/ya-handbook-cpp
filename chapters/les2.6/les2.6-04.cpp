int main()
{
    int my_variable{ 42 };
    int& ref; // ошибка: ссылка обязательно должна быть проинициализирована!

    // ...

    ref = my_variable;

    return 0;
}