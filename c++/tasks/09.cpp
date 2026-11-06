#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    for (int i = 100; i >= 0; i -= 7) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    return 0;
}
