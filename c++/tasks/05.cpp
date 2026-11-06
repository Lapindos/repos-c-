#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int positive = 0;
    int negative = 0;
    int zeros = 0;
    int x;

    std::cout << "Число (0 — стоп): ";
    std::cin >> x;

    while (x != 0) {
        if (x > 0) {
            positive = positive + 1;
        } else {
            negative = negative + 1;
        }
        std::cin >> x;
    }

    std::cout << "Положительных: " << positive << "\n";
    std::cout << "Отрицательных: " << negative << "\n";
    std::cout << "Нулей: " << zeros << "\n";

    return 0;
}
