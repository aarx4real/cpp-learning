// Abstract Class — An abstract class is a class
// that contains at least one pure virtual function
// and whose objects cannot be created.

// Pure Virtual Function — A pure virtual function
// is a virtual function that is declared with = 0 
// and has no implementation in the base class.

#include <iostream>
using namespace std;

class Animal{
public:
    virtual void sound()=0;
};

class Dog : public Animal{
public:
    void sound(){
        cout<<"Dog barks"<<endl;
    }
};

class Cat : public Animal{
public:
    void sound(){
        cout<<"Cat meows"<<endl;
    }
};

class Cow : public Animal{
public:
    void sound(){
        cout<<"Cow moos";
    }
};

int main(){
    Animal *ptr;
    Dog dog;
    Cat cat;
    Cow cow;

    ptr=&dog;
    ptr->sound();

    ptr=&cat;
    ptr->sound();

    ptr=&cow;
    ptr->sound();

    return 0;
}