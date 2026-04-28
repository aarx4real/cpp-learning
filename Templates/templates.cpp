#include <iostream>
using namespace std;

template <typename T>
T Max1(T a, T b){                       //only accepts arguments of a single type
    return(a>b) ? a : b ;
}

template <typename T, typename U>
auto Max2(T x, U y){                    //can accept arguments of two differnet types
    return(x>y) ? x : y; 
}

int main(){
    cout << Max1(2,4) << endl;
    cout << Max2(2,4) << endl;
    cout << Max2(2.4,4.2) << endl;
    cout << Max2('A',67) << endl;
    return 0;
}