#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;

int main(){

    int arr[5]={5,3,8,2,6};
    sort(arr, arr+5);

    vector<int> vec={5,3,8,2,6};
    //sort(vec.begin(),vec.end()); - ascending order
    //sort(vec.begin(),vec.end(),greater<int>()); - decending order

    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}