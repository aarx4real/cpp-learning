#include <iostream>

void Name(std::string name);

int main(){
    std::string name;
    std::cin >> name;
    Name(name);
    return 0;
}

void Name(std::string name){
    std::cout << "Your name is: " << name;
}