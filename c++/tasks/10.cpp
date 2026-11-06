#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int count = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 != 0) {
            count++;
        }
    }
    std::cout << "Количество: " << count << "\n";

    return 0;
}
