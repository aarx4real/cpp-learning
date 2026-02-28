#include <iostream>
#include <stdlib.h>
#include <cmath>

int main() {
    system("cls");

    int base;
    int height;
    
    std::cout << "Enter the lenght of base: " << '\n';
    std::cin >> base;

    std::cout << "Enter the lenght of height: " << '\n';
    std::cin >> height;

    double hypotenuse = std::sqrt(pow(base, 2)+height*height);

    std::cout << "The lenght of Hypotenuse is: " << hypotenuse << '\n';
    return 0;
}