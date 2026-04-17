//Single level inheritance : Parent -> Child
//Multi level inheritance : Parent -> Parent -> Child

/* inheritance - when the properties and member funntions
of the base class are passed on to the derived class*/

#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    Person(string name, int age){
        this->name=name;
        this->age=age;
    }
};
class Student : public Person {
public:
    int rollno;
    Student(string name, int age, int rollno) : Person(name,age){
        this->rollno=rollno;
    }
};
class GradStudent : public Student {
public:
    string ResearchArea;
    GradStudent(string name, int age, int rollno, string ResearchArea) : Student(name, age, rollno){
        this->ResearchArea = ResearchArea;
    }
    void getinfo(){
        cout << "Name-" << name << endl;
        cout << "Age-" << age << endl;
        cout << "Rollno-" << rollno << endl;
        cout << "ResearchArea-" << ResearchArea << endl;
    }
};
int main() {
    GradStudent s1("Aarush",18,812,"Computer Science");
    s1.getinfo();
    return 0;
}