// hello_world.cpp — улучшенный стиль кода
#include <iostream>
#include <string>

// Главная функция программы
int
main()
{
    // Объявление переменной для хранения имени
    std::string name;

    // Запрос имени у пользователя
    std::cout << "Enter your name: ";
    std::cin >> name;

    // Вывод персонализированного сообщения
    std::cout << "Hello world from @" << name << std::endl;
    return 0;
}