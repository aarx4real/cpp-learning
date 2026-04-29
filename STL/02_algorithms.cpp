#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;

int main(){

    int arr[5]={5,3,8,2,6};
    if(find(arr,arr+5,10) != arr+5){     // if not found find returns arr+n
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }
    cout<<endl;

    vector<int> vec={5,3,8,2,6};
    if(find(vec.begin(),vec.end(),7) != vec.end()){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }
    cout<<endl;

    return 0;
}