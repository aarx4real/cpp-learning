#include <iostream>
using namespace std;

template <typename T>
T Max(T a, T b){
    return(a>b) ? a : b ;
}
int main(){
    cout << Max(2,4) << endl;
    return 0;
}