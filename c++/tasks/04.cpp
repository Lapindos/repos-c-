#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int p = 1;
    while (p <= 1000) {
        std::cout << p << " ";
        p = p * 2;
    }
    std::cout << "\n";

    return 0;
}
