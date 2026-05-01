// hello_world.cpp — плохой стиль кода (учебный пример)
#include <iostream>
#include <string>

using namespace std; // ❌ Плохая практика: загрязнение глобального пространства имён

int main()
{
    cout << "Hello world" << endl;
    return 0;
}