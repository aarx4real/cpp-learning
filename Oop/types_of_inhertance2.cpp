//Single level inheritance : Parent -> Child
//Multi level inheritance : Parent -> Parent -> Child
//Multiple inheritance : Parent, Parent -> Child

/* inheritance - when the properties and member funntions
of the base class are passed on to the derived class*/

#include <iostream>
using namespace std;

class Student{
public:
    int rollno;
    string name;
};

class Teacher{
public:
    string subject;
    double salary;
};

class TA : public Student, public Teacher {
};
int main() {
    TA t1;
    t1.name="Aarush";
    t1.subject="Computer science";
    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    return 0;
}