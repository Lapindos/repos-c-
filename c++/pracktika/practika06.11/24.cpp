#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int count = 0;
    for (int n = 1; n <= 1000; n++) {
        int x = n;
        bool has7 = false;

        while (x > 0) {
            if (x % 10 == 7) {
                has7 = true;
                break;
            }
            x = x / 10;
        }

        if (has7) {
            count++;
        }
    }

    std::cout << "Количество: " << count << "\n";

    return 0;
}
