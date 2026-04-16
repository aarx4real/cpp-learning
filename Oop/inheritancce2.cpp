/* inheritance - when the properties and member funntions
of the base class are passed on to the derived class*/

#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
    void legal(){
        if(age>=18){
            cout << "Legal" << endl;
        }
        else{
            cout << "Not Legal" << endl;
        }
    }
};
class Student : public Person {
public:
    int rollno;
    Student(string name,int age,int rollno) : Person(name,age){
        this->rollno=rollno;
    }
    void getinfo(){
        cout << "Name-" << name << endl;
        cout << "Age-" << age << endl;
        cout << "Rollno-" << rollno << endl;
    }
};
int main() {
    Student s1("Aarush",17,812);
    s1.getinfo();
    s1.legal();
    return 0;
}