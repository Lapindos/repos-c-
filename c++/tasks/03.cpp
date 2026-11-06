#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int x;
    std::cout << "Число (1..10): ";
    std::cin >> x;

    while (std::cin.fail() || x < 1 || x > 10) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Некорректно. Число (1..10): ";
        std::cin >> x;
    }

    std::cout << "Квадрат: " << x * x << "\n";

    return 0;
}
