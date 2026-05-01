// hello_world.cpp — улучшенный стиль кода
#include <iostream>
#include <string>

// Главная функция программы
int
main()
{
    // Объявление переменной для хранения имени
    std::string name;

    // Ввод имени: пользователь вводит данные (обновлено в main)
    std::cout << "Enter your name: ";
    // Вывод персонализированного сообщения
    std::cout << "Hello world from @" << name << std::endl;
    return 0;
}
