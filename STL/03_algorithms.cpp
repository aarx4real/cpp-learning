#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int arr[6]={1,2,3,2,4,2};
    cout<<count(arr,arr+6,2)<<endl;

    vector<int> vec={1,2,3,4,3,5};
    cout<<count(vec.begin(),vec.end(),3)<<endl;
    return 0;
}