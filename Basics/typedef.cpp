#include <iostream>
#include <stdlib.h>

//typedef - reserved keyword used to create an additional name(alais) for another data type,
//          this helps with readability and reduce typos.
//          But replace with  "using" as work better with templates.

typedef std::string text_t;   //always end the alias name with '_t'.
typedef int number_t;
typedef double fraction_t;

using text_t = std::string;    // syntax -> using newname_t = oldname(datatype) 
using number_t = int;
using fraction_t = double;

int main() {
    system("cls");
    text_t name="Aarush Gupta";
    number_t age=18;
    fraction_t bankbalance = 69.69;
    std::cout << name << ", age - " << age << ", bank balance = " << bankbalance << '\n';
    return 0;
}