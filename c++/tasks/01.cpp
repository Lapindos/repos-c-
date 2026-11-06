#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int product = 1;
    int x;

    std::cout << "Число (0 — стоп): ";
    std::cin >> x;

    while (x != 0) {
        product = product * x;
        std::cin >> x;
    }

    std::cout << "Произведение: " << product << "\n";

    return 0;
}
