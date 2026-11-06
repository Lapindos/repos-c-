#include <iostream>
#include <string>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    while (true) {
        std::string word;
        std::cout << "> ";
        std::getline(std::cin, word);

        if (word == "stop") break;
        std::cout << "Длина: " << word.length() << "\n";
    }

    return 0;
}
