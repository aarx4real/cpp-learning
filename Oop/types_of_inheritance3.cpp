// Hierarchical Inheritance
#include <iostream>
using namespace std;

class Person{
public:
    string name;
    int age;
    Person(string name, int age){
        this->name=name;
        this->age=age;
    }
};

class Student : public Person{
public:
    int rollno;
    Student(string name, int age, int rollno) : Person(name,age){
        this->rollno=rollno;
    }
};

class Teacher : public Person{
    string subject;
    Teacher(string name, int age, int rollno) : Person(name,age){
        this->subject=subject;
    }
};

int main(){
    Student s1("Aarush",18,812);
    Teacher t1("Aarush",18,"Subject computer science");
    return 0;
}
