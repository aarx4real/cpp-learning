#include <iostream>
using namespace std;
class Student {
public:
    string name;
    double cgpa;
    Student(string name,double cgpa){
        this->name=name;
        this->cgpa=cgpa;
    }

    Student(Student &obj){
        this->name=obj.name;
        this->cgpa=obj.cgpa;
    }
    void showinfo(){
        cout << "Name : " << name << endl;
        cout << "Cgpa : " << cgpa << endl;
    }
};

int main() {
    Student s1("Rahul kumar",8.9);
    Student s2(s1);
    s2.showinfo();
    return 0;
}