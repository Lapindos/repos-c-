#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int product = 1;                    // накопитель ДО цикла
    int x;

    std::cout << "Число (0 — стоп): ";
    std::cin >> x;

    while (x != 0) {                    // пока не введён 0
        product = product * x;          // обновляем В цикле
        std::cin >> x;
    }

    std::cout << "Произведение: " << product << "\n";   // используем ПОСЛЕ

    return 0;
}
