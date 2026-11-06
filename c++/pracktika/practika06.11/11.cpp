#include <iostream>
#include <cmath>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int choice;
    do {
        std::cout << "\n1 — квадрат числа\n2 — корень числа\n0 — выход\nВыбор: ";
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            choice = -1;
        }

        if (choice == 1) {
            double x;
            std::cout << "Число: ";
            std::cin >> x;
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                std::cout << "Некорректно\n";
            } else {
                std::cout << "Квадрат: " << x * x << "\n";
            }
        } else if (choice == 2) {
            double x;
            std::cout << "Число: ";
            std::cin >> x;
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                std::cout << "Некорректно\n";
            } else if (x < 0) {
                std::cout << "Корень из отрицательного числа не существует\n";
            } else {
                std::cout << "Корень: " << std::sqrt(x) << "\n";
            }
        } else if (choice == 0) {
            std::cout << "Выходим...\n";
        } else {
            std::cout << "Неверно\n";
        }

    } while (choice != 0);

    return 0;
}
