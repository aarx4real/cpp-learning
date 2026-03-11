#include <iostream>
using namespace std;
class Demo {
public:
    Demo(){
        cout << "Constructor called" << endl;
    }
    ~Demo(){
        cout << "Destructor called" << endl;
    }
};
void test(){
    static Demo object;
    cout << "Inside test funciton" << endl;
} 
int main(){
    test();
    test();
    test();
    return 0;
}