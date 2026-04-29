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

    cout << "The element at index 2 is " << vec[2] << endl;             //vec.[x] - to access the xth index element or vector
    cout << "The element at index 2 is " << vec.at(2) << endl;          //vec.at(x) - to access the xth index element or vector
    
    cout<<"First element " << vec.front() << endl;          //vec.front() - returns the first element
    cout<<"Last element " << vec.back() << endl;            //vec.back() - returns the last element
    return 0;
}