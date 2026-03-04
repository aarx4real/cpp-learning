#include <iostream>
using namespace std;

// Default constructor 
class Demo{
public:
    Demo() {
        cout << "Default Constructor" << endl;
    }
};

// Parameterized constructor
class Demo2 {
public:
    int x=5;

    // If parameter name = data member name dont use this-> operator
    Demo2(int a){
        x=a+1;
        cout << x << endl;
    }
};

int main(){
    Demo d1_1;
    Demo2 d2_2(5);
    return 0;
}