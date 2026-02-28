#include <iostream>
#include <stdlib.h>

int main() {
    system("cls");

    //datatypes
    
    //integer
    int x=5;    
    int y=7;
    int z=3.5;  //z will be truncated to 3
    int sum=x+y;
    std::cout << x << '\n' << y << '\n' << sum; 

    //double
    double pi=3.14159;    
    double radius=7.2;
    double area=pi*radius*radius;   //c++ has no ** exponentiation operator
    std::cout << radius << "\n" << pi << "\n" << area << std::endl;    //endl moves to a new line and flushes the output buffer

    //char (single character)
    char firstname='A';    
    char secondname='G';
    std::cout << firstname+secondname;      //result is based on ASCII values
    std::cout << '\n' << firstname << '_' << secondname;

    //bool (True & False)
    bool power = true;
    bool question = false;
    std::cout << '\n' << power << '\n' << false;

    //string (objects that represents a sequence of text)
    std::string name1="Aarush"; //std::string -> class, variable name -> object.
    std::string name2="Gupta";
    std::cout << '\n' << name1 << ' ' << name2 << '\n';

    //const keyword
    const double PI=3.14195;   //const keyword tells compiler to prevent anything from modifying it
    const double E=2.71;    //the variable become read only
    return 0;
}