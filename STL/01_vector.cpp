#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec; //Size=0,Capacity=0;

    vec.push_back(1);           //pusb_back() - adds elements to the end
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);        

    vec.pop_back();             //pop_back - removes the last elements from a vector

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    for(int i : vec){
        cout << i << " ";
    }
    return 0;
}