#include <iostream>
#include <iomanip>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            std::cout << std::setw(4) << i * j;
        }
        std::cout << "\n";
    }

    return 0;
}
