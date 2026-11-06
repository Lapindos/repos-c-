#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    for (int i = 2; i <= 50; i += 2) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    return 0;
}
