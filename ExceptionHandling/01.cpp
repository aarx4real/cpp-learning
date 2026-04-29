#include <iostream>
using namespace std;

int main(){
    int a=1,b=2;
    try{
        if(b==0){
            throw b;
        }
        else{
            cout << a/b;
        }
    }
    catch(int x){
        cout << "Division by zero error";
    }
    return 0;
}