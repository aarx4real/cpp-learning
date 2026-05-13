// Virtual function- A virtual function is a member
// function that allows function overriding and
// supports runtime polymorphism.

#include <iostream>
using namespace std;

class Parent{
public:
    virtual void show(){
        cout<<"Parent class";
    }
};

class Child : public Parent{
public:
    void show(){
        cout<<"Child class";
    }
};

int main(){
    Parent *ptr;
    Child c1;
    ptr=&c1;
    ptr->show();    // Late Binding/Runtime Polymorphism
    return 0;
}