#include <iostream>
using namespace std;

template <typename T>
class Calculator{
public:

    T add(T a, T b){
        return a+b;
    }

    T subtract(T a, T b){
        return a-b;
    }

    T multiply(T a, T b){
        return a*b;
    }

    T divide(T a, T b){
        if(b==0){
            cout << "Division by Zero error" << endl;
            return 0;
        }
        else{
            return a/b;
        }
    }
};

int main(){

    Calculator<int> intCalculator;
    cout<<intCalculator.add(4,5)<<endl;
    cout<<intCalculator.subtract(4,5)<<endl;
    cout<<intCalculator.multiply(4,5)<<endl;
    cout<<intCalculator.divide(4,5)<<endl;
    cout<<intCalculator.divide(4,0)<<endl;

    Calculator<float> floatCalculator;
    cout<<floatCalculator.add(4.5,5.4)<<endl;
    cout<<floatCalculator.subtract(4.5,5.4)<<endl;
    cout<<floatCalculator.multiply(4.5,5.4)<<endl;
    cout<<floatCalculator.divide(4.5,5.4)<<endl;

return 0;
}