#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int year;
    bool ok = false;
    do {
        std::cout << "Год рождения (1900..2025): ";
        std::cin >> year;
        if (std::cin.fail() || year < 1900 || year > 2025) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Некорректно!\n";
        } else {
            ok = true;
        }
    } while (!ok);

    int age = 2026 - year;
    std::cout << "Возраст: " << age << "\n";

    return 0;
}
