#include <iostream>
#include <ctime>

int main() {

    //  We use time(0) which returns the number of seconds passed since
    //  1 January 1970 and this value changes every second even when offline.
    //  This value is used in srand() to set a different seed each time
    //  the program runs. rand() then uses a deterministic formula based
    //  on this seed to generate pseudo-random numbers.
    //
    //  next = (previous × A + B) % M

    srand(time(NULL));

    int num1 = (rand() % 6) + 1;       // pseudo-random = Not truly random(but close).
    int num2 = (rand() % 6) + 1; 
    int num3 = (rand() % 6) + 1; 

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';

    return 0;
}