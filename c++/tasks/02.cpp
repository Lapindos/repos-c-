#include <iostream>
#include <string>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int attempts = 0;
    std::string password;

    while (password != "secret" && attempts < 3) {
        std::cout << "Пароль: ";
        std::cin >> password;
        attempts = attempts + 1;

        if (password != "secret" && attempts < 3) {
            std::cout << "Неверно\n";
        }
    }

    if (password == "secret") {
        std::cout << "Верно\n";
    } else {
        std::cout << "Попытки исчерпаны\n";
    }

    return 0;
}
