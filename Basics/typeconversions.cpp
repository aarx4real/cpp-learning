#include <iostream>
#include <stdlib.h>

//Type conversions - Conversion of a value of one data type to another
//        Implicit - Automatic
//        Explicit - precede value with new data type. Syntax -> (data_type) variable_name
int main() {
    system("cls");

    //Implicit
    int x = 3.14;
    std::cout << x << '\n';     //3 -> x was implicitly converted to 3

    char alphabet = 100;
    std::cout << alphabet << '\n';

    //Explicit
    double y = (int) 3.14;     //3 -> y was explicitly converted to 3
    std::cout << y << '\n';

    std::cout << (char) 100;
    return 0;
}