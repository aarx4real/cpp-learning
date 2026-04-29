#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<pair<int,int>> vec={{1,2},{2,3},{3,4},{4,5}};

    vec.push_back({5,6});       // only inserts assumes that object is aldready created
    vec.emplace_back(5,6);      // In-place object creation then inserts

    for(auto p : vec){
        cout << p.first << " " << p.second  << endl;
    }
    return 0;
}