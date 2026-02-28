#include <iostream>
#include <stdlib.h>

namespace first{
    int x = 10;
}

namespace second{
    int x = 20;
}

int main() {
    system("cls");
    //using namespace first;
    //using namespace second;
    std::cout << first::x << '\n';
    std::cout << second::x << '\n';
    return 0;
}