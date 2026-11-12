// master main.cpp

#include <iostream>

int dodaj(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "W pierwszym branchu; 2 + 3 = " << dodaj(2, 3) << std::endl;
    return 0;