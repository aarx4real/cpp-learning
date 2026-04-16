/* inheritance - when the properties and member funntions
of the base class are passed on to the derived class*/

#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    void legal(){
        if(age>=18){
            cout << "Legal" << endl;
        }
        else{
            cout << "Not Legal" << endl;
        }
    }
    Person(){
        cout << "Parent donstructor called" << endl;
    }
    ~Person(){
        cout << "Parent destructor called" << endl;
    }
};
class Student : public Person {
public:
    int rollno;
    void getinfo(){
        cout << "Name-" << name << endl;
        cout << "Age-" << age << endl;
        cout << "Rollno-" << rollno << endl;
    }
    Student(){
        cout << "Child construtor called" << endl;
    }
    ~Student(){
        cout << "Child destructor called" << endl;
    }
};
int main() {
    Student s1;
    s1.name="Aarush";
    s1.age=17;
    s1.rollno=812;
    s1.getinfo();
    s1.legal();
    return 0;
}