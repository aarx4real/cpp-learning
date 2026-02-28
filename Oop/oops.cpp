#include <iostream>

class Human {       // Creation of class

    public:     // Access specifier

        std::string name;       // Data members or Member variables (Attributes/Properties)
        int age;
        std::string occupation;

        void eat(){     // Member functions
            std::cout << "This person eats\n";
        }
        void sleep(){
            std::cout << "This human sleeps\n";
        }
        void drink(){
            std::cout << "This human drinks";
        }
    
};      // End of class *Dont forget semicolon(;)*

int main() {
    
    Human human1;       // Object creation

    human1.name = "Aarush";     //Accessing a public member variable using the dot operator
    human1.age = 18;
    human1.occupation = "Student";

    std::cout << human1.name << '\n';
    std::cout << human1.age << '\n';
    std::cout << human1.occupation << '\n';

    human1.eat();       // Calling member function
    human1.sleep();
    human1.drink();

    return 0;
}