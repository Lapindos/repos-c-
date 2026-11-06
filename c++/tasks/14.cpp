#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int foundAt = -1;
    for (int i = 50; i <= 200; i++) {
        if (i % 7 == 0 && i % 11 == 0) {
            foundAt = i;
            break;
        }
    }

    if (foundAt == -1) std::cout << "Не найдено\n";
    else               std::cout << "Найдено: " << foundAt << "\n";

    return 0;
}
