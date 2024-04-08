#include <iostream>

int findGreatest(int x, int y, int z) {
    int greatest = x;

    if (y > greatest) {
        greatest = y;
    }
    if (z > greatest) {
        greatest = z;
    }

    return greatest;
}

int main() {
    int x, y, z;
    std::cout << "Enter three numbers: ";
    std::cin >> x >> y >> z;

    int greatest = findGreatest(x, y, z);
    std::cout << "The greatest number is: " << greatest << std::endl;

    return 0;
}
