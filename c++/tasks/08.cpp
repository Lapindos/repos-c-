#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    for (int i = 20; i >= 1; i--) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    return 0;
}
