#include <iostream>
#include <cstring>

int main() {
    const int MAX_CHAR = 256; // Assuming ASCII characters

    char inputString[1000];
    std::cout << "Enter a string: ";
    std::cin.getline(inputString, 1000);

    int charCounts[MAX_CHAR] = {0}; // Initialize counts to 0

    for (int i = 0; inputString[i] != '\0'; ++i) {
        if (!std::isspace(inputString[i])) {
            charCounts[inputString[i]]++;
        }
    }

    std::cout << "Character Counts:" << std::endl;
    for (int i = 0; i < MAX_CHAR; ++i) {
        if (charCounts[i] != 0) {
            std::cout << "'" << static_cast<char>(i) << "': " << charCounts[i] << std::endl;
        }
    }

    return 0;
}
