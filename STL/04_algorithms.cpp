#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<int> vec = {1,2,3,4,5};
    vector<int> sub = {2,3};

    if(search(vec.begin(),vec.end(),sub.begin(),sub.end()) != vec.end()){
        cout << "Subsequnce Found" << endl;
    }
    else{
        cout << "Subsequnce Not Found" << endl;
    }
    return 0;
}