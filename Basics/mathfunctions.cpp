#include <iostream>
#include <stdlib.h>
#include <cmath>

int main() {
    system("cls");

    double x = 3;
    double y = 4;
    double z;
    
    // 1. max() - return maximum value
    z = std::max(x, y);
    std::cout << z << '\n';

    // 2. min() - return minimum value
    z = std::min(x, y);
    std::cout << z << '\n';

    // 3. std::pow - raised to the power
    z = std::pow(x, y);
    std::cout << z << '\n';

    // 4. std::sqrt - return square root
    z = std::sqrt(y);
    std::cout << z << '\n';

    // 5. std::abs - return distace from zero
    std::cout << std::abs(5)<< '\n' << std::abs(-5) << '\n' << std::abs(0) << '\n';

    // 6. std::round - rounds and returns a floating point number.
    std::cout << std::round(3.5) << '\n';   //.5 is rounded away fromm zero
    std::cout << std::round(-4.3) << '\n';

    // 7. std::ceil - returs smallest floating point number >= the given number
    std::cout << std::ceil(4.9) << '\n';
    std::cout << std::ceil(-2.3) << '\n';

    // 8.std::floor - returs largest floating point number <= the given number
    std::cout << std::floor(7.9) << '\n';
    std::cout << std::floor(-9.1) << '\n';
    return 0;
}