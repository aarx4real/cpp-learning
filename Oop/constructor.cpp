#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string name, int age, double gpa){     // Constructor - Special method that is automaitcally called when
            this->name = name;                          // an object is instantiated useful for assaiging values to an attributes 
            this->age=age;                              // as arguments
            this->gpa=gpa;                              
        }                                               

        void display(){
            std::cout << name << '\n'
                      << age << '\n'
                      << gpa << '\n';
        }
};

int main() {

    Student student1("Nishok",18,8.4);

    student1.display();

    return 0;
}                                                   
