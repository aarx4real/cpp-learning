#include <iostream>
using namespace std;

/* Access specifiers are keywords in C++ that control 
the accessibility (visibility) of class 
members (data members and member functions).
They help in achieving encapsulation by restricting 
access to the data of a class. */

/* 1️⃣ Public

Members declared as public can be accessed from 
anywhere in the program.

They can be accessed inside the class and outside 
the class using objects. */

class Student {
public:
    string name;

    void display() {
        cout << name;
    }
};

/* 2️⃣ Private

Members declared as private can be accessed only inside the class.

They cannot be accessed directly outside the class.

Private is the default access specifier in a class. */

class Student {
private:
    int marks;

public:
    void setMarks(int m) {
        marks = m;
    }

    void showMarks() {
        cout << marks;
    }
};

/* 3️⃣ Protected

Members declared as protected can be accessed inside the
 class and in derived classes.

They cannot be accessed directly outside the class. */

class Parent {
protected:
    int x;
};

class Child : public Parent {
public:
    void setValue() {
        x = 10;
        cout << x;
    }
};

/* Data hiding - is a mechanism of restricting direct
access to data members by declaring them private and
providing controlled access through public functions. */