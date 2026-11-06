#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    std::srand((unsigned)std::time(0));
    int secret = std::rand() % 100 + 1;

    int guess = 0;
    int attempts = 0;

    do {
        std::cout << "Число (1..100, -1 — выход): ";
        std::cin >> guess;

        while (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Некорректно. Число (1..100, -1 — выход): ";
            std::cin >> guess;
        }

        if (guess == -1) {
            std::cout << "Выход\n";
            break;
        }

        attempts = attempts + 1;

        if (guess < secret)      std::cout << "Больше\n";
        else if (guess > secret) std::cout << "Меньше\n";
        else                     std::cout << "Угадали! Попыток: " << attempts << "\n";

    } while (guess != secret);

    return 0;
}
