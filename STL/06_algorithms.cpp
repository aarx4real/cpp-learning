#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int add(int &x){
    return x+=5;
}

void display(int &x){
    cout << x << " ";
}

int main(){
    vector<int> vec1={1,2,3,4,5};
    vector<int> vec2={1,2,3,4,5};

    for_each(vec1.begin(),vec1.end(),display);
    for_each(vec2.begin(),vec2.end(),add);
    cout<<endl;

    for(int val : vec2){
        cout << val << " ";
    }
    return 0;
}