#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    for (int i = 1; i <= 30; i++) {
        if (i % 3 == 0 && i % 5 == 0) continue;
        std::cout << i << " ";
    }
    std::cout << "\n";

    return 0;
}
