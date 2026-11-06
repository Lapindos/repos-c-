#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int sum = 0;

    while (true) {
        int x;
        std::cout << "Число: ";
        std::cin >> x;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }

        if (x == 0) break;
        if (x < 0) continue;
        sum = sum + x;
    }

    std::cout << "Сумма: " << sum << "\n";

    return 0;
}
