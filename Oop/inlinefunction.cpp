// An inline function is a function in which the compiler
// replaces the function call with the actual function code
// to reduce function call overhead.

#include <iostream>
using namespace std;

inline int square(int x){
    return x*x;
}

int main(){
    int x = 5;
    cout << square(5);
    return 0;
}