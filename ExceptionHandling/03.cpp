#include <iostream>
using namespace std;

class AgeException{
public:
    void show(){
        cout << "Age must be 18 or above";
    }
};

int main(){

    int age;
    cout << "Enter age: ";
    cin >> age;

    try{
        if(age < 18){
            throw AgeException();
        }
        cout << "Access granted";
    }

    catch(AgeException e){
        e.show();
    }

    return 0;
}