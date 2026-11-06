#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int h = 6;
    for (int i = 1; i <= h; i++) {
        for (int s = 1; s <= h - i; s++) {
            std::cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }

    return 0;
}
