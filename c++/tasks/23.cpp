#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    bool stop = false;
    for (int a = 1; a <= 10 && !stop; a++) {
        for (int b = 1; b <= 10; b++) {
            if (a * b == 24 && a < b) {
                std::cout << "(" << a << "," << b << ")\n";
                stop = true;
                break;
            }
        }
    }

    return 0;
}
