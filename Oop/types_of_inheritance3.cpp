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
    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<rollno<<endl;
    }
};

class Teacher : public Person{
public:
    string subject;
    Teacher(string name, int age, string subject) : Person(name,age){
        this->subject=subject;
    }
        void display(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<subject<<endl;
    }
};

int main(){
    Student s1("Aarush",18,812);
    Teacher t1("Aarush",18,"Subject computer science");
    s1.display();
    t1.display();
    return 0;
}
