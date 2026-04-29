#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> vector1={1,2,3,4,5,6};
    vector<int> vector2(3,10);
    
    //vector(x,y) - way to initialize vector where x is the size(number of elemets)
    //              and y is the element that will be repeated x times.

    vector<int> vector3(vector1); //vector3(vector1) - copy constructor of a vector

    for(int i : vector1){
        cout << i << " ";
    }
    
    cout << "\n";

    for(int i : vector2){
        cout << i << " ";
    }

        cout << "\n";

    for(int i : vector3){
        cout << i << " ";
    }

    return 0;
}