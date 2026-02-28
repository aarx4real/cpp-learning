#include <iostream>
#include <stdlib.h>

// cout << (insertion operator)
// cin >> (extraction operator)

int main() {
    system("cls");
    
    std::string name;
    int age;

    std::cout << "Whats your age?" << '\n';     //std::cin reads characters until white spaces(' ',\n,\t)
    std::cin >> age;                            //std::getline() reads everything until \n and clears the buffer
                                                //but if we use it after taking a previous input then the \n character
    std::cout << "Whats your name?" << '\n';    //in the previous input causes std::getline() to clear everything and a empty
    std::getline(std::cin >> std::ws, name);    //string is passed on to the next variable
                                                //to fix that we use std::ws which removes all the white spaces before std::getline() reads the string.
    std::cout << "Your name is : " << name << '\n';
    std::cout << "You are " << age << " years old." << '\n';
    return 0;
}