#include <iostream>
using namespace std;

class Parent{
public:
    void show(){
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
    ptr->show();    //Early binding
    //Early binding means: Function call is decided during compile time.
    return 0;
}