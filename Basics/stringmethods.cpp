#include <iostream>
#include <string>

int main() {

    std::string name;
    std::string secondname = " Gupta";

    std::cout << "Enter your name" << '\n';
    std::getline(std::cin, name);

    std::cout << name.length() << '\n';     // .lenght() -> Returns the length of a string

    std::cout << name.empty() << '\n';      // .empty() -> Retruns a boolean value, 0-Non-empty string, 1-Empty string
    
    //std::cout << name.clear() << '\n';     // .clear() -> Clears the string

    std::cout << name.append(secondname) << '\n';       // .append() - Append a string to the end of another string
    std::cout << name.append(" is the best") << '\n';

    std::cout << name.at(0) << '\n';        // .at(<index>) - Returns a character at a specific index in a string

    std::cout << name.insert(0,"@") << '\n';        // .insert(<index>,<"string">) - Insert a string at a specific index

    std::cout << name.find(' ') << '\n';     // .find(<'Character'>) - Returns the index of specified character

    std::cout << name.erase(0,4) << '\n';       // .erase(<start_index>,<end_index>) - Erases a particular part of string
    return 0;
}