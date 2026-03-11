/* A destructor is a special member function of a class that
has the same name as the class preceded by a tilde (~) and is
automatically invoked when an object is destroyed. It is used
to free resources allocated by the object. */


/* 📌 Characteristics of Destructor:
1)Name is same as class name but with ~ symbol
2)Has no return type
3)Takes no arguments
4)Called automatically
5)Only one destructor per class (cannot be overloaded)
6)Used for cleanup operations. */


#include <iostream>
using namespace std;
class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor called" << endl;
    }
    // Destructor
    ~Demo(){
        cout << "Destructor called" << endl;
    }

};
int main () {
    Demo object;    // Object created
    cout << "Inside main function" << endl;
    return 0;   // When main ends object is destroyed
}