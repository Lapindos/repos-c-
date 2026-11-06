#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int sum = 0;
    int count = 0;
    int x;

    do {
        std::cout << "Число: ";
        std::cin >> x;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Некорректно!\n";
            continue;
        }

        sum = sum + x;
        count = count + 1;
    } while (sum <= 100);

    std::cout << "Чисел: " << count << "\n";

    return 0;
}
